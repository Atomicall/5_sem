#include <iostream>
#include <sstream>
#include <conio.h>
#include <Windows.h>
#include <ntddscsi.h> 

//https://docs.microsoft.com/en-us/windows/win32/api/ioapiset/nf-ioapiset-deviceiocontrol
using namespace std;


//https://docs.microsoft.com/en-us/windows/win32/api/winioctl/ne-winioctl-storage_bus_type
//ATA SATA SCSI SAS FC-AL USB PCIe
//по исполнению,конструкции(сменные носители), адресация, физ явл
//обл прим. скорость, диаметр, интерфейс
//м пластины, шпинд. двиг., подвес головок, электропривод, электроника
//ЧМ модифЧМ огранич длинна послед
string busType[] = { "TypeUnknown",
"Scsi",
"Atapi",
"Ata",
"1394",
"Ssa",
"Fibre",
"Usb",
"RAID",
"Scsi",
"Sas",
"Sata",
"Sd",
"Mmc",
"Virtual",
"FileBackedVirtual",
"Spaces",
"Nvme",
"SCM",
"Ufs",
"Max",
"Reserved" };


HANDLE GetDriveHandle(int driveNumber)
{
	std::stringstream sstm;
	sstm << "\\\\.\\PhysicalDrive" << driveNumber;
	string driveName = sstm.str();

	HANDLE hDevice = CreateFileA(driveName.c_str(), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL); //https://docs.microsoft.com/en-us/windows/win32/api/fileapi/nf-fileapi-createfilea

	if (hDevice == INVALID_HANDLE_VALUE)
		throw new exception("failed to create drive handle");

	return hDevice;
}


void PrintDriveInfo(HANDLE handle)
{
	DWORD bytesReturned = 0;

	// Fill up struct necessary for IO call 
	// https://docs.microsoft.com/en-us/windows/win32/api/winioctl/ns-winioctl-storage_property_query
	STORAGE_PROPERTY_QUERY storagePropertyQuery;
	ZeroMemory(&storagePropertyQuery, sizeof(STORAGE_PROPERTY_QUERY));
	storagePropertyQuery.PropertyId = StorageDeviceProperty;
	storagePropertyQuery.QueryType = PropertyStandardQuery;


	// get the necessary output buffer size
	// https://docs.microsoft.com/en-us/windows/win32/api/winioctl/ns-winioctl-storage_descriptor_header
	STORAGE_DESCRIPTOR_HEADER storageDescriptorHeader;
	bytesReturned = 0;


	//https://docs.microsoft.com/en-us/windows/win32/api/ioapiset/nf-ioapiset-deviceiocontrol
	if (!DeviceIoControl(handle, IOCTL_STORAGE_QUERY_PROPERTY,
		&storagePropertyQuery, sizeof(STORAGE_PROPERTY_QUERY),
		&storageDescriptorHeader, sizeof(STORAGE_DESCRIPTOR_HEADER),
		&bytesReturned, NULL))
	{
		throw new exception("failed");
	}


	// allocate the necessary memory for the output buffer
	const DWORD outBufferSize = storageDescriptorHeader.Size;
	BYTE* pOutBuffer = new BYTE[outBufferSize];
	ZeroMemory(pOutBuffer, outBufferSize);

	// get the storage device descriptor
	if (!DeviceIoControl(handle, IOCTL_STORAGE_QUERY_PROPERTY,
		&storagePropertyQuery, sizeof(STORAGE_PROPERTY_QUERY),
		pOutBuffer, outBufferSize,
		&bytesReturned, NULL))
	{
		throw new exception("failed");
	}

	STORAGE_DEVICE_DESCRIPTOR* device_descriptor = (STORAGE_DEVICE_DESCRIPTOR*)pOutBuffer;

	if (device_descriptor->VendorIdOffset != 0) {
		cout << "Vendor: " << (char*)(pOutBuffer)+device_descriptor->VendorIdOffset << endl;
	}

	if (device_descriptor->ProductIdOffset != 0) {
		std::string str = std::string((char*)(pOutBuffer)+device_descriptor->ProductIdOffset);

		std::string maker = str.substr(0, 5);
		cout << "Manufacture: " << maker << "\t";
		cout << "Model: " << (char*)(pOutBuffer)+device_descriptor->ProductIdOffset << endl;
		
	}

	if (device_descriptor->SerialNumberOffset != 0) {
		cout << "Serial number: " << (char*)(pOutBuffer)+device_descriptor->SerialNumberOffset << endl;
	}

	if (device_descriptor->ProductRevisionOffset != 0) {
		cout << "Firmware version: " << (char*)(pOutBuffer)+device_descriptor->ProductRevisionOffset << endl;
	}

	if (device_descriptor->BusType != 0) {
		cout << "Bus type: " << busType[device_descriptor->BusType] << endl;
	}

	delete[] pOutBuffer;
}

void ShowDiskInfo(char letter, int driveNumber)
{
	std::stringstream sstm0;
	sstm0 << "\\\\.\\" << letter << ":";
	string path = sstm0.str();

	HANDLE volume_handle = CreateFileA(
		path.c_str(),
		0,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		OPEN_EXISTING,
		FILE_FLAG_BACKUP_SEMANTICS,
		NULL
	);
	STORAGE_PROPERTY_QUERY storagePropertyQuery;
	ZeroMemory(&storagePropertyQuery, sizeof(STORAGE_PROPERTY_QUERY));
	storagePropertyQuery.PropertyId = StorageDeviceProperty;
	storagePropertyQuery.QueryType = PropertyStandardQuery;
	const DWORD out_buffer_size = 12;
	BYTE* out_buffer = new BYTE[out_buffer_size];
	ZeroMemory(out_buffer, out_buffer_size);
	DWORD bytes_returned = 0;
	if (!DeviceIoControl(volume_handle,
		IOCTL_STORAGE_GET_DEVICE_NUMBER,
		&storagePropertyQuery,
		sizeof(STORAGE_PROPERTY_QUERY),
		out_buffer,
		out_buffer_size,
		&bytes_returned,
		NULL))
	{
		throw new exception();
	}

	_STORAGE_DEVICE_NUMBER* device_number = (_STORAGE_DEVICE_NUMBER*)out_buffer;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (device_number->DeviceNumber != driveNumber)
	{
		return;
	}

	if (volume_handle == INVALID_HANDLE_VALUE){
		throw new exception();
	}

	std::stringstream sstm;
	sstm << letter << ":/";
	path = sstm.str();
	ULARGE_INTEGER diskSpace;
	ULARGE_INTEGER freeSpace;
	diskSpace.QuadPart = 0;
	freeSpace.QuadPart = 0;
	if (!GetDiskFreeSpaceExA(path.c_str(),
		NULL,
		&diskSpace,
		&freeSpace)) 
		{
		throw new exception;
	}
	diskSpace.QuadPart = diskSpace.QuadPart / pow(1024, 3);
	freeSpace.QuadPart = freeSpace.QuadPart / pow(1024, 3);
	cout << endl;
	cout << "Volume: " << letter << endl;
	cout << "Total space, gb: " << diskSpace.QuadPart << endl;
	cout << "Free space, gb: " << freeSpace.QuadPart << endl;
	cout << "Used space, gb: " << diskSpace.QuadPart - freeSpace.QuadPart << endl;
	cout << endl;
}


void ShowDiskSpace(int driveNumber)
{
	DWORD disks_mask = GetLogicalDrives();
	for (char i = 'A'; i <= 'Z'; i++)
	{
		if (disks_mask % 2 == 1)
		{
			ShowDiskInfo(i, driveNumber);
		}
		disks_mask = disks_mask >> 1;
	}
}


BOOL SupportedModes(HANDLE hDevice) {
	DWORD dwBytes;
	BOOL  bResult;
	//https://coderoad.ru/39547166/%D0%9A%D0%B0%D0%BA-%D1%83%D0%B7%D0%BD%D0%B0%D1%82%D1%8C-%D0%BA%D0%B0%D0%BA%D0%B8%D0%B5-%D1%81%D1%82%D0%B0%D0%BD%D0%B4%D0%B0%D1%80%D1%82%D1%8B-ATA-%D0%BF%D0%BE%D0%B4%D0%B4%D0%B5%D1%80%D0%B6%D0%B8%D0%B2%D0%B0%D1%8E%D1%82%D1%81%D1%8F-HDD
//https://docs.microsoft.com/en-us/windows-hardware/drivers/ddi/ntddscsi/ns-ntddscsi-_ata_pass_through_ex
	CONST UINT bufferSize = 512;
	CONST BYTE identifyDataCommandId = 0xEC;

	UCHAR identifyDataBuffer[bufferSize
		+ sizeof(ATA_PASS_THROUGH_EX)] = { 0 };

	ATA_PASS_THROUGH_EX& PTE = *(ATA_PASS_THROUGH_EX*)identifyDataBuffer;
	PTE.Length = sizeof(PTE);
	PTE.TimeOutValue = 10;
	PTE.DataTransferLength = 512;
	PTE.DataBufferOffset = sizeof(ATA_PASS_THROUGH_EX);

	IDEREGS* ideRegs = (IDEREGS*)PTE.CurrentTaskFile;
	ideRegs->bCommandReg = identifyDataCommandId;
	ideRegs->bSectorCountReg = 1;

	PTE.AtaFlags = ATA_FLAGS_DATA_IN | ATA_FLAGS_DRDY_REQUIRED;

	bResult = DeviceIoControl(hDevice, IOCTL_ATA_PASS_THROUGH, &PTE,
		sizeof(identifyDataBuffer), &PTE,
		sizeof(identifyDataBuffer), &dwBytes, 0);

	if (bResult == FALSE) {
		throw new exception;
	}

	WORD* data = (WORD*)(identifyDataBuffer + sizeof(ATA_PASS_THROUGH_EX));
	int i, bitArray[2 * 8];
	short ataSupportByte = data[80];
	i = 2 * 8;
	while (i--) {
		bitArray[i] = ataSupportByte & 32768 ? 1 : 0;
		ataSupportByte = ataSupportByte << 1;
	}
	std::cout << "\nATA Support: ";
	for (i = 8; i >= 4; i--) {
		if (bitArray[i] == 1) {
			std::cout << "ATA" << i;
			if (i != 4) {
				std::cout << ", ";
			}
		}
	}
	unsigned short pioSupportedBytes = data[63];
	i = 2 * 8;
	while (i--) {
		bitArray[i] = pioSupportedBytes & 32768 ? 1 : 0;
		pioSupportedBytes = pioSupportedBytes << 1;
	}
	std::cout << "\nPIO Support: ";
	for (i = 0; i < 2; i++) {
		if (bitArray[i] == 1) {
			std::cout << "PIO" << i + 3;
			if (i != 1) std::cout << ", ";
		}
	}
	unsigned short dmaSupportedBytes = data[63];
	i = 2 * 8;
	while (i--) {
		bitArray[i] = dmaSupportedBytes & 32768 ? 1 : 0;
		dmaSupportedBytes = dmaSupportedBytes << 1;
	}
	std::cout << "\nDMA Support:  ";
	for (i = 0; i < 8; i++) {
		if (bitArray[i] == 1) {
			std::cout << "DMA" << i;
			if (i != 2) std::cout << ", ";
		}
	}
	std::cout << std::endl;
	return bResult;
}

int main()
{
	HANDLE handle = GetDriveHandle(0);
	PrintDriveInfo(handle);
	SupportedModes(handle);
	ShowDiskSpace(0);
	cout << endl;
	_getch();
}