#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#pragma execution_character_set( "utf-8" )

using namespace std;


int main() {
    SetConsoleOutputCP( 65001 );

    cout << "------------------------------------------------------------\n";
    cout << "MITARBEITERGLÜCKSSPIEL DER COMPUTER GMBH - Raten einer Zahl\n";
    cout << "------------------------------------------------------------\n";

    int EingegebeneZahl;
    cout << "Geben Sie eine Zahl zwischen 0 und 1000 ein:\n";
    cin >> EingegebeneZahl;

    int Glückszahl;
    srand(time(0));
    Glückszahl = rand() % 1000;

    int Versuch;

    while(Glückszahl != EingegebeneZahl) {
        if(Glückszahl > EingegebeneZahl) {
            cout << "Die eingegebene Zahl ist zu klein!\n\n";
            Versuch = Versuch + 1;
            cout << "Geben Sie eine Zahl zwischen 0 und 1000 ein:\n";
            cin >> EingegebeneZahl;
            
        } else if(Glückszahl < EingegebeneZahl) {
            cout << "Die eingegebene Zahl ist zu groß!\n\n";
            Versuch = Versuch + 1;
            cout << "Geben Sie eine Zahl zwischen 0 und 1000 ein:\n";
            cin >> EingegebeneZahl;
            
        }
    }
    cout << "\nHurra!!! Sie haben die richtige Zahl erraten\n";

    if(Versuch < 1) {
        cout << "Jackpot!!! Sie haben 100 Euro gewonnen!\n";
    }else if(Versuch < 3) {
        cout << "Glückwunsch! Sie haben 50 Euro gewonnen!\n";
    }else if(Versuch < 5) {
        cout << "Glückwunsch! Sie haben 20 Euro gewonnen!\n";
    }else if(Versuch < 10) {
        cout << "Glückwunsch! Sie haben 10 EUro gewonnen!\n";
    }else {
        cout << "Leider verloren!\n";
    }
    
}