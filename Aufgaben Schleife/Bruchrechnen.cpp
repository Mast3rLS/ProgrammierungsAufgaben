#include <iostream>

using namespace std;


int main() {
    cout << "---------------\n";
    cout << "Bruchrechnen\n";
    cout << "---------------\n\n\n";

    int Ganze, Zähler, Nenner, UnechterBruch;
    cout << "Ganze: ";
    cin >> Ganze;
    cout << "\nZähler: ";
    cin >> Zähler;
    cout << "\nNenner: ";
    cin >> Nenner;

    UnechterBruch = Ganze * Nenner + Zähler;
    cout << "\n\nDer unechte Bruch von " << Ganze << " " << Zähler << "/" << Nenner << " ist: " << UnechterBruch << "/" << Nenner;
}