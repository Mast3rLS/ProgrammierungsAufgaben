#include <iostream>
using namespace std;
int Aufgabe1() {
    double Menge, Einzelpreis;
    cout << "Geben Sie die Menge ein: ";
    cin >> Menge;
    cout << "Geben Sie den Einzelpreis ein: ";
    cin >> Einzelpreis;
    double Gesamtpreis = Menge * Einzelpreis;
    cout << "Der Gesamtpreis beträgt: " << Gesamtpreis << " Euro";
}