#include <iostream>
#include <iomanip>

using namespace std;


int main() {

    cout << fixed;
    cout << setprecision(2);

    double Sollstunden, Iststunden, Stundenlohn, Netto, Überstunden, Zuschlag, Brutto;

    cout << "Wie viele Sollstunden waren es diesen Monat?\n";
    cin >> Sollstunden;

    cout << "Wie viele Iststunden waren es diesen Monat?\n";
    cin >> Iststunden;

    cout << "Wie hoch ist der Stundenlohn?\n";
    cin >> Stundenlohn;

    Netto = Iststunden * Stundenlohn;

    if (Sollstunden * 1.1 < Iststunden) {
        Überstunden = Iststunden - Sollstunden;
        Zuschlag = Überstunden * Stundenlohn * 0.3;
    } else if (Sollstunden < Iststunden) {
        Überstunden = Iststunden - Sollstunden;
        Zuschlag = Überstunden * Stundenlohn * 0.1;
    }

    Netto = Netto + Zuschlag;
    Brutto = Netto * 0.81;

    cout << "Dein Bruttolohn beträgt: " << Brutto << " €\n";

}