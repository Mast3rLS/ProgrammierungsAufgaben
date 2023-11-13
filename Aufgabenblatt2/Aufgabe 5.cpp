#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    
    cout << fixed;
    cout << setprecision(2);

    int Kundenkategorie, AnzahlMaus;
    double Einzelpreis, Warenwert, RabattinProzent, Rabatt€, Netto, Brutto, Umsatzsteuer;


    cout << "Wie viele Mäuse werden gekauft?\n";
    cin >> AnzahlMaus;

    cout << "Wie viel kostet eine Maus?\n";
    cin >> Einzelpreis;

    cout << "In welcher Kundenkategorie sind Sie?\n";
    cin >> Kundenkategorie;

    switch (Kundenkategorie)
    {
        case 1: 
            RabattinProzent = 0.1;
            break;
        case 2:
            RabattinProzent = 0.12;
            break;
        case 3:
            RabattinProzent = 0.15;
            break;
        case 4:
            RabattinProzent = 0.2;
            break;
        case 5:
            RabattinProzent = 0.3;
            break;
        default:
            RabattinProzent = 0;
            break;
    }

    Warenwert = AnzahlMaus * Einzelpreis;
    Rabatt€ = Einzelpreis * RabattinProzent;
    Netto = Einzelpreis - Rabatt€;
    Umsatzsteuer = Netto * 0.19;
    Brutto = Netto + Umsatzsteuer;
    RabattinProzent = RabattinProzent * 100;

    cout << "Dein Warenwert ist: " << Einzelpreis << " €\n";
    cout << "Dein Rabatt ist: " << RabattinProzent << " %\n";
    cout << "Du sparst: " << Rabatt€ << " €\n";
    cout << "Dein Nettobetrag liegt bei: " << Netto << " €\n";
    cout << "Die Umsatzsteuern sind: " << Umsatzsteuer << " €\n";
    cout << "Der Brutto betrag ist: " << Brutto << " €\n";


}