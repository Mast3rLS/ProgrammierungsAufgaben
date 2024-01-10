#include <iostream>

using namespace std;

int main() {
    cout << "---------------------\n";
    cout << " Game Taschenrechner\n";
    cout << "---------------------\n\n\n";

    int Men = 2650, Metal = 1171, Wood = 324, Concrete = 47, Cost = 0, TCost = 0;

    cout << "Wie viele starke sexy Männer kaufen wir?\n";
    cin >> TCost;
    TCost = TCost * Men;
    Cost = TCost;
    cout << "Wie viele harte Metall Stangen kaufen wir?\n";
    cin >> TCost;
    TCost = TCost * Metal;
    Cost = Cost + TCost;
    cout << "Wie viele Morgenlatten kaufen wir?\n";
    cin >> TCost;
    TCost = TCost * Wood;
    Cost = Cost + TCost;
    cout << "Wie viel Concrete kaufen wir?\n";
    cin >> TCost;
    TCost = TCost * Concrete;
    Cost = Cost + TCost;

    cout << "Die gesamt kosten betragen " << Cost << " €.";
}