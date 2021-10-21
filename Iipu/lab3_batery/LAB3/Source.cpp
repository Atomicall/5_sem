#pragma comment(lib, "PowrProf.lib")
#pragma comment (lib, "setupapi.lib")
#include <Windows.h>
#include <iostream>
#include <powrprof.h>
#include <thread>   
#include "conio.h"
#include <Poclass.h>
#include <Setupapi.h>
#include <devguid.h>
using namespace std;
int ch = 5;
bool GetBattChemType()
{
	HDEVINFO DeviceInfoSet;
	if ((DeviceInfoSet = SetupDiGetClassDevs(&GUID_DEVCLASS_BATTERY, NULL, NULL, DIGCF_PRESENT | DIGCF_DEVICEINTERFACE)) == INVALID_HANDLE_VALUE)
	{
		cout << "Error: " << GetLastError() << endl;
		exit(1);
	}
	//https://docs.microsoft.com/en-us/windows/win32/api/setupapi/ns-setupapi-sp_device_interface_data
	SP_DEVICE_INTERFACE_DATA DeviceInterfaceData = { 0 };
	ZeroMemory(&DeviceInterfaceData, sizeof(SP_DEVINFO_DATA));
	DeviceInterfaceData.cbSize = sizeof(SP_DEVINFO_DATA);
	if (SetupDiEnumDeviceInterfaces(DeviceInfoSet, NULL, &GUID_DEVCLASS_BATTERY, 0, &DeviceInterfaceData))
	{
		DWORD cbRequired = 0;
		//https://docs.microsoft.com/en-us/windows/win32/api/setupapi/nf-setupapi-setupdigetdeviceinterfacedetaila
		SetupDiGetDeviceInterfaceDetail(DeviceInfoSet, &DeviceInterfaceData, NULL, NULL, &cbRequired, NULL);
		if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
		{
			//https://docs.microsoft.com/en-us/windows/win32/api/setupapi/ns-setupapi-sp_device_interface_detail_data_a
			PSP_DEVICE_INTERFACE_DETAIL_DATA pdidd = (PSP_DEVICE_INTERFACE_DETAIL_DATA)LocalAlloc(LPTR, cbRequired);
			pdidd->cbSize = sizeof(*pdidd);
			if (SetupDiGetDeviceInterfaceDetail(DeviceInfoSet, &DeviceInterfaceData, pdidd, cbRequired, &cbRequired, NULL))
			{
				HANDLE hBattery = CreateFile(pdidd->DevicePath, GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
				if (INVALID_HANDLE_VALUE != hBattery)
				{
					BATTERY_QUERY_INFORMATION BatteryQueryInformation = { 0 };
					DWORD bytesWait = 0;
					DWORD bytesReturned = 0;
					//https://docs.microsoft.com/en-us/windows/win32/power/ioctl-battery-query-tag
					if (DeviceIoControl(hBattery, IOCTL_BATTERY_QUERY_TAG, &bytesWait, sizeof(bytesWait), &BatteryQueryInformation.BatteryTag,
						sizeof(BatteryQueryInformation.BatteryTag), &bytesReturned, NULL) && BatteryQueryInformation.BatteryTag)
					{
						BATTERY_INFORMATION BatteryInfo = { 0 };
						BatteryQueryInformation.InformationLevel = BatteryInformation;
						if (DeviceIoControl(hBattery, IOCTL_BATTERY_QUERY_INFORMATION, &BatteryQueryInformation, sizeof(BatteryQueryInformation),
							&BatteryInfo, sizeof(BatteryInfo), &bytesReturned, NULL))
						{
							cout << "Battery chemistry type: ";
							for (int b = 0; b < 4; b++)
							{
								cout << BatteryInfo.Chemistry[b];
							};
							cout << endl;
						}
					}
					else
					{
						cout << "Error: " << GetLastError() << endl;
						CloseHandle(hBattery);
						return false;
					}
					CloseHandle(hBattery);
				}
				else
				{
					cout << "Error: " << GetLastError() << endl;
					return false;
				}
			}
			LocalFree(pdidd);
		}
	}
	SetupDiDestroyDeviceInfoList(DeviceInfoSet);
	return true;
}

void getinfo() {
	SYSTEM_POWER_STATUS powerStatus; //https://docs.microsoft.com/en-us/windows/win32/api/winbase/ns-winbase-system_power_status
	char saveMODE[2][7] = { "OFF", "ON" };
	char acSTATUS[2][15] = { "Disconnected", "Connected" };
	while (ch != 0) {
	system("cls");
	GetSystemPowerStatus(&powerStatus); // WinApi
	cout << "Battery % : " << (int)powerStatus.BatteryLifePercent << endl;
	cout << "Battery time left: " << (powerStatus.BatteryLifeTime % 216000) / 3600 << "h " << (powerStatus.BatteryLifeTime % 3600) / 60 << "m" << endl;
	cout << "AC status: " << acSTATUS[powerStatus.ACLineStatus] << endl;
	cout << "Battery Saver Status: " << saveMODE[powerStatus.SystemStatusFlag] << endl;	
	GetBattChemType();
	cout << "1 -> Sleep" << endl;
	cout << "2 -> Hibernate" << endl;
	cout << "0 -> Exit" << endl << endl;
	Sleep(1000);
	}
}

int main() {
	thread th (getinfo);
	while (ch != 0) {
		if (ch = _getch()) {
			ch -= '0';
			switch (ch) {
			case(1):
			{
			SetSuspendState(FALSE, TRUE, FALSE);
			break;
			}
			case(2):
			{
			SetSuspendState(TRUE, FALSE, FALSE);
			break;
			}
			}
		}
	}
	th.join();
	return 0;
}