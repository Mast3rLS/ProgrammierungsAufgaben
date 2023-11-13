#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <ctime>

#pragma execution_character_set( "utf-8" )

using namespace std;

void Spiel1() {
    cout << "\n\n\n";
    cout << "-------------------------------------------------------\n";
    cout << "MITARBEITERGLÜCKSSPIEL DER COMPUTER GMBH - GLÜCKSLISTE\n";
    cout << "-------------------------------------------------------\n\n\n";
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
        cout << ("%i\n", zahlen[i]) << " ";
       

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

    int x;
    cout << "\n\nMöchten Sie nochmal spielen?\n    Ja[1]   Nein[2]\n";
    cin >> x;
    if (x == 1) {
        Spiel1();
    }

    cout << "\n\n\n\n\n";
}


void Spiel2() {
    cout << "\n\n\n";
    cout << "------------------------------------------------------------\n";
    cout << "MITARBEITERGLÜCKSSPIEL DER COMPUTER GMBH - Raten einer Zahl\n";
    cout << "------------------------------------------------------------\n";

    int EingegebeneZahl;
    cout << "Geben Sie eine Zahl zwischen 0 und 1000 ein:\n";
    cin >> EingegebeneZahl;

    int Glückszahl;
    srand(time(0));
    Glückszahl = rand() % 1000;

    int Versuch = 0;

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

    int x = 0;
    cout << "\n\nMöchten Sie nochmal spielen?\n    Ja[1]   Nein[2]\n";
    cin >> x;
    if (x == 1) {
        Spiel2();
    }
    
    cout << "\n\n\n\n\n";
}


void Spiel3() {
    cout << "\n\n\n";
    cout << "----------------------------------------------------------\n";
    cout << "MITARBEITERGLÜCKSSPIEL DER COMPUTER GMBH - LOTTO 6 AUS 19\n";
    cout << "----------------------------------------------------------\n";

    vector<int> lottozahlen;
    vector<int> eingegebeneZahlen;

    cout << "Tippen Sie Ihre 6 Lottozahlen:\n\n";
    for (int i = 1; i < 7; ++i) {
        int zahl;
        cout << i << ". Lottozahl: ";
        cin >> zahl;

        auto it = find(eingegebeneZahlen.begin(), eingegebeneZahlen.end(), zahl);
        if (it != eingegebeneZahlen.end()) {
            cout << "Diese Zahl wurde bereits eingegeben. Bitte geben Sie eine andere ein.\n";
            --i;
        } else if (zahl < 1 || zahl > 19) {
            cout << "Die eingegebene Zahl muss zwischen 1 und 19 liegen. Bitte versuchen Sie es erneut.\n";
            --i;
        } else {
            eingegebeneZahlen.push_back(zahl);
        }
    }

    int superzahl;
    cout << "\nSuperzahl: ";
    cin >> superzahl;
    cout << "\n\n\n";

    while (superzahl < 1 || superzahl > 19) {
        cout << "Die eingegebene Superzahl muss zwischen 1 und 19 liegen. Bitte versuchen Sie es erneut.\n";
        cout << "\nSuperzahl: ";
        cin >> superzahl;
    }

    int Superzahl = rand() % 19 + 1;
    sort(eingegebeneZahlen.begin(), eingegebeneZahlen.end());


    vector<int> gezogeneZahlen(6);
    for (int i = 0; i < 6; i++) {
        gezogeneZahlen[i] = rand() % 19 + 1;
    }
    random_shuffle(gezogeneZahlen.begin(), gezogeneZahlen.end());

    

    int ÜbereinstimmendeZahlen = 0;
    for (int zahl : eingegebeneZahlen) {
        if (binary_search(gezogeneZahlen.begin(), gezogeneZahlen.end(), zahl)) {
            ÜbereinstimmendeZahlen++;
            gezogeneZahlen.push_back(zahl);
        }
    }

    cout << "--------------------------------\n";
    for (const auto& element : gezogeneZahlen) {
        cout << " - " << element;
    }
    cout << " -\n--------------------------------\n";


    cout << "\nDie Superzahl ist: " << Superzahl << "\n";

    if (ÜbereinstimmendeZahlen < 3) {
        cout << "Sie haben " << ÜbereinstimmendeZahlen << " Richtige! Leider kein Gewinn!";
    } else if (ÜbereinstimmendeZahlen == 3) {
        cout << "Sie haben " << ÜbereinstimmendeZahlen << " Richtige! Sie gewinnen 5 Euro";
    } else if (ÜbereinstimmendeZahlen == 4) {
        cout << "Sie haben " << ÜbereinstimmendeZahlen << " Richtige! Sie gewinnen 10 Euro";
    } else if (ÜbereinstimmendeZahlen == 5) {
        cout << "Sie haben " << ÜbereinstimmendeZahlen << " Richtige! Sie gewinnen 15 Euro";
    } else if (ÜbereinstimmendeZahlen == 6) {
        cout << "Sie haben " << ÜbereinstimmendeZahlen << " Richtige! Jackpot!!! Sie gewinnen 50 Euro";
    }
    if (superzahl == Superzahl && ÜbereinstimmendeZahlen >= 3) {
        cout << "Sie haben die Richtige Superzahl! Sie gewinnen zusätzlich 5 Euro!";
    } else {
        
    }

    int x;
    cout << "\n\nMöchten Sie nochmal spielen?\n    Ja[1]   Nein[2]\n";
    cin >> x;
    if (x == 1) {
        Spiel3();
    }

    cout << "\n\n\n\n\n";
}


int main() {
    SetConsoleOutputCP( 65001 );
    srand(time(0));

    cout << "-----------------------------------------\n";
    cout << "MITARBEITERGLÜCKSSPIEL DER COMPUTER GMBH\n";
    cout << "-----------------------------------------\n\n\n";

    int Spiel;
    cout << "Welches Spiel möchten Sie spielen?\n\n";
    cout << "Spiel [1]      Spiel [2]       Spiel [3]\n\n";
    cin >> Spiel;

    int i;

    if (Spiel == 1) {
        Spiel1();
        cout << "Möchten Sie ein anderes Spiel spielen?\n   Ja[1]   Nein[2]\n";
        cin >> i;
        if (i == 1) {
            main();
        }
    } else if (Spiel == 2) {
            Spiel2();
            cout << "Möchten Sie ein anderes Spiel spielen?\n   Ja[1]   Nein[2]\n";
            cin >> i;
            if (i == 1) {
            main();
        }

    } else if (Spiel == 3) {
            Spiel3();
            cout << "Möchten Sie ein anderes Spiel spielen?\n   Ja[1]   Nein[2]\n";
            cin >> i;
            if (i == 1) {
            main();
        }
    } 
}