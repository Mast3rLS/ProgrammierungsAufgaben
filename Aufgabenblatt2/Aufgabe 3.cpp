#include <iostream>
#include <iomanip>

using namespace std;


int main() {

    int AnzahlMaus;
    double PreisMaus, Bestellwert, Netto, Umsatzsteuer, Brutto;

    cout << fixed;
    cout << setprecision(2);

    cout << "Wie viele Mäuse werden gekauft?\n";
    cin >> AnzahlMaus;
    cout << "Wie viel € kosten eine Maus?\n";
    cin >> PreisMaus;
    Bestellwert = AnzahlMaus * PreisMaus;

    int Transportpauschale = AnzahlMaus >= 10 ? 0 : 10;

    Netto = Bestellwert + Transportpauschale;
    Umsatzsteuer = Netto * 0.19;
    Brutto = Netto + Umsatzsteuer;


    cout << "Netto ist: " << Netto << " €\n";
    cout << "Transportpauschale ist: " << Transportpauschale << " €\n";
    cout << "Umsatzsteuer ist: " << Umsatzsteuer << " €\n";
    cout << "Brutto ist: " << Brutto << " €\n";

}