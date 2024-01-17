#include <iostream>
#include <iomanip>

#include "Aufgabe_1.h"
#include "Aufgabe_1.5.h"
#include "Aufgabe_2.h"
#include "Aufgabe_3.h"
#include "Aufgabe_4.h"
#include "Aufgabe_5.h"
#include "Aufgabe_6.h"
#include "Aufgabe_7.h"
#include "Aufgabe_8.h"
#include "Aufgabe_9.h"
#include "Aufgabe_10.h"

using namespace std;






int main() {
    //Auf 2 Nachkommastellen runden
    cout << fixed << setprecision(2);
    //Aufgaben
    int again1 = 1, again = 1;
    double Aufgabe = 0.0;
    //Richtige Aufgaben abfrage
    while (again1 == 1) {
        //Schleife die solange durchgeht bis eine richtige Aufgabe aufgrerufen werden kann
        while (Aufgabe < 1 || Aufgabe > 10) {
            cout << "Welche Aufgabe soll benutzt werden?\n";
            cin >> Aufgabe;
        }
        //Schleife die abfragt ob man noch eine andere Aufgabe
        while (again == 1) {
            if (Aufgabe == 1) {
                //Aufruf der headerfile "Aufgabe_1.h"
                Aufgabe1();
            } else if (Aufgabe == 1.5) {
                //Variablen definition
                double Menge, Einzelpreis;
                //Abfrage und Eingabe der Werte
                cout << "Geben Sie die Menge ein: ";
                cin >> Menge;
                cout << "Geben Sie den Einzelpreis ein: ";
                cin >> Einzelpreis;
                //Aufruf der headerfile "Aufgabe_1.5.h die die Aufgabe berechnet
                Aufgabe1_5(Menge, Einzelpreis);
                double Gesamtpreis = Aufgabe1_5(Menge, Einzelpreis);
                cout << "Der Gesamtpreis beträgt: " << Gesamtpreis << " Euro";
            } else if (Aufgabe == 2) {

            } else if (Aufgabe == 3) {

            } else if (Aufgabe == 4) {

            } else if (Aufgabe == 5) {

            } else if (Aufgabe == 6) {

            } else if (Aufgabe == 7) {

            } else if (Aufgabe == 8) {

            } else if (Aufgabe == 9) {

            } else if (Aufgabe == 10) {

            }

            cout << "\n\nNochmal?\n";
            cin >> again;
        }
        cout << "\n\nNochmal?\n";
        cin >> again1;
    }
}