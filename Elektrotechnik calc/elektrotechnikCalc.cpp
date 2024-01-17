#include <iostream>
#include <iomanip>
#include "stromkreis.h"
#include "leistung.h"
#include "widerstand.h"
#include "leistung.h"
#include "arbeit.h"
#include "wirkungsgrad.h"

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    //Variablendefinition
    int Aufgabe = 0, again = 1;
    //Welche Aufgabe?
    while (Aufgabe < 0 || Aufgabe > 5) {
        cout << "Stromkreis = 1; Widerstand = 2; Leistung = 3; Arbeit = 4; Wirkungsgrad = 5\nWelche Aufgabe haben wir?";
        cin >> Aufgabe;
        //Aufgaben Aufruf
        while (again == 1) {
            if (Aufgabe == 1) {
                stromkreis();
            }
            cout << "Nochmal?\n";
            cin >> again;
        }
    }
}