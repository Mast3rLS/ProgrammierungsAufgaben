#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctime>
#include <windows.h>
#include <vector>
#include <algorithm>
#pragma execution_character_set( "utf-8" )

using namespace std;


int main() {
    SetConsoleOutputCP( 65001 );
    srand(time(0));

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

    cout << "\n\n\n\n\n";
}


