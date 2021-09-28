#include<unistd.h>
#include <fstream>
#include <iostream>
#include <filesystem>

using namespace std;
static int pci_d_amount =  0;
struct  device {
    string  common;
    string domain;
    string bus;
    string device;
    string function;
    string  v_id ;
    string d_id;
    string v_name;
    string d_name;
    friend ostream &operator<<( ostream& output, struct device& w){
        output << "| "<<w.domain << "  |  "<<w.bus << " |   "<<w.device << "   |    "<<w.function <<"     |   " << "0x"<<w.v_id << "  |"<< "0x" <<w.d_id<<"  |"<<w.v_name << "       | "<<w.d_name<<endl;
        return  output;
    }
};
device mass[255];
int find_dev (){
    int i=0;
    ifstream data;
    data.open("pci.ids");
    if (!data.is_open()) {
        cout << "\nError opening the file";
        exit(-1);
    }
    filesystem::path ROOTP = "/sys/bus/pci/devices/"; // contain pci devices
    for (auto it:  filesystem::recursive_directory_iterator(filesystem::path (ROOTP))){
        mass [i].common = it.path().stem().string()  + it.path().extension().string();
        string tmp = mass [i].common;
        replace(tmp.begin(), tmp.end(), ':', ' ');
        replace(tmp.begin(), tmp.end(), '.', ' ');
        stringstream s (tmp);
        s>> mass[i].domain >> mass[i].bus >> mass[i].device >> mass[i].function;
        s.clear();
        FILE *fp;
        char buffer[2048] = {};
        string pa;
        fp = popen (string("cat " + it.path().string() + "/uevent | grep PCI_ID").c_str(), "r");
        if (fp != NULL)
        {
            while (fgets(buffer, 2048, fp) != NULL);
            pclose(fp);
        }
        else exit(-1);
        string g (buffer);
        g = g.substr(7, g.length() - 7);
        replace(g.begin(), g.end(), ':', ' ');
        mass[i].v_id += g.substr(0, 4);
        std::for_each(g.begin(), g.end(), [](char & c){
            c = ::tolower(c);
        });
        mass[i].d_id += g.substr(5, 4);

        string str;
        while(!data.eof())
        {
            getline(data, str);
            if (str.find(mass[i].v_id) == 0) {
                mass[i].v_name = str.erase(0, 5);
                break;
            }
        }
        while(!data.eof())
        {
            getline(data, str);
            if (str.find(mass[i].d_id) != string::npos ) {
                mass[i].d_name = str.erase(0, 5);
                break;
            }
            if (str == "C ff  Unassigned class") {
                mass[i].d_name = str;
               // cout << "         " << mass[i].d_id << endl;
                break;
            }
        }
        data.seekg(0, std::ios_base::beg);

        i++;
    }
    return i;
}
int main(void)
{
    cout << "|DOMAIN | BUS | DEVICE | FUNCTION | VENDOR_ID | DEV_ID | VEND_NAME               | DEV_NAME"<<endl;
    int amount = find_dev();
    for (int i=0; i< amount; i++) cout << mass[i];
    return 0;
}


/*
extern "C"{
#include "pci/pci.h"
}

int main (){
    return 1;
}*/
