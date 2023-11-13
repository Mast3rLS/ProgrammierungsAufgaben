#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#pragma execution_character_set( "utf-8" )

using namespace std;




int main() {
    SetConsoleOutputCP( 65001 );
    cout << "-------------------------------------------------------\n";
    cout << "MITARBEITERGLÜCKSSPIEL DER COMPUTER GMBH - GLÜCKSLISTE\n";
    cout << "-------------------------------------------------------\n";
    cout << "Gebe deine Glückszahl ein (1-100):\n";
    int Glückszahl;
    cin >> Glückszahl;
    cout << "\n";


    int zahlen[250];
    int i;
    srand(time(0));

    cout << "Deine Glücksliste ist:\n\n";


    
    for(i = 0; i < 249; i++) {
        zahlen[i] = rand() % 99 + 1;
        cout << ("%i\n", zahlen[i]) << ", ";
       

    }
    for(i = 0; i < 1; i++) {
        zahlen[i] = rand() % 100;
        cout << ("%i\n", zahlen[i]);
       

    }

    cout << "\n\n";

    int Gewinnzahlen = 0;

    for(i = 0; i < 250; i++) {
        if (zahlen[i] == Glückszahl) {
            Gewinnzahlen = Gewinnzahlen + 1;
        }        
    }



    if(Gewinnzahlen == 0) {
        cout << "Leider verloren!\n";
    } else if(Gewinnzahlen <= 3) {
        cout << "Glückwunsch! Sie haben 5 Euro gewonnen!\n";
        cout << "Ihre Eingabe ist " << Gewinnzahlen << "x in der Glücksliste enthalten!\n";
    } else if(Gewinnzahlen > 3) {
        cout << "Herzlichen Glückwunsch! Sie haben 5 Euro gewonnen!\n";
        cout << "Ihre Eingabe ist " << Gewinnzahlen << "x in der Glücksliste enthalten!\n";
        cout << "Jackpot! Sie erhalten zusätzlich 10 Euro!\n";
    }

    cout << "\n\n\n\n\n";
    main();
}