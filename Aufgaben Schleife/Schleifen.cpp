#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    int Reis = 2400000;
    int Tag = 1;
    int Entnahme = 1;

    cout << "Wie viel Reis ist im Sack? --> " << Reis << "\n";
    while (Reis != 0) {
        Reis = Reis - Entnahme;
        cout << "Tag " << setw(2) << Tag << " - Entnahme = " << setw(7) << Entnahme << " - Rest = " << setw(7) << Reis << "\n";
        Tag = Tag + 1;
        Entnahme = Entnahme * 2;
        if (Entnahme > Reis) {
            Entnahme = Reis;
        }
    }
    cout << "Am Ende des " << Tag << ". Tag kann er Ottilie heiraten!";
}