#include <iostream>
#include <iomanip>

using namespace std;


int main() {

    int AnzahlMaus;
    double PreisMaus, Rabatt€, Bestellwert, Nettobetrag, Umsatzsteuer, Bruttobetrag, RabattInProzent; 

    cout << fixed;
    cout << setprecision(2);

    cout << "Wie viele Mäuse werden gekauft?\n";
    cin >> AnzahlMaus;
    cout << "Wie viel € kosten eine Maus?\n";
    cin >> PreisMaus;
    Bestellwert = AnzahlMaus * PreisMaus;

    if (Bestellwert < 100) {        
        RabattInProzent = 0.1;
    } else if (Bestellwert < 500) {
        RabattInProzent = 0.15;
    } else {
        RabattInProzent = 0.2;
    }

    Rabatt€ = Bestellwert * RabattInProzent;
    Nettobetrag = Bestellwert - Rabatt€;
    Umsatzsteuer = Nettobetrag * 0.19;
    Bruttobetrag = Nettobetrag + Umsatzsteuer;
    RabattInProzent = RabattInProzent * 100;

    cout << "Warenwert: " << Bestellwert << " €.";
    cout << "\nRabatt in Prozent: " << RabattInProzent << " %.";
    cout << "\nRabatt in Euro: " << Rabatt€ << " €";
    cout << "\nNettobetrag: " << Nettobetrag << " €";
    cout << "\nUmsatzsteuer: " << Umsatzsteuer << " €";
    cout << "\nBruttobetrag " << Bruttobetrag << " €";
}