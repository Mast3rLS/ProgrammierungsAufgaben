#include <iostream>
#include <windows.h>


using namespace std;


int main() {
    int Länderkennziffer, KennzeichenH, Produktkennziffer, Prüfziffer;

    cout << "Geben Sie den EAN-Code ein.\n";
    cin >> Länderkennziffer >> KennzeichenH >> Produktkennziffer >> Prüfziffer;


    
    cout << Länderkennziffer << "." << KennzeichenH << "." << Produktkennziffer << "." << Prüfziffer;

    Sleep(500000);

}