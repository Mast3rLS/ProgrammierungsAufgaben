#include <iostream>

using namespace std;

int main() {
    //Variablen erstellung
    int Wert1, Wert2, Ergebnis;
    string Nochmal = "ja";
    while (Nochmal == "ja") {
        //Eingabe
        Ergebnis = 0;
        cout << "Geben Sie den Wert 1 ein: ";
        cin >> Wert1;
        cout << "Geben Sie den Wert 2 ein: ";
        cin >> Wert2;
        //Rechnung
        Wert2++;
        for (int i = Wert1; i < Wert2; i++) {
            Ergebnis = Ergebnis + i;
        }
        Wert2--; Wert2--;
        //Ausgabe
        cout << "Die Summe der Zahlen von " << Wert1 << " bis " << Wert2 << " beträgt " << Ergebnis << "!";

        cout << "\n\nWeitere Berechnung (ja/nein) -> ";
        cin >> Nochmal;
    }
    cout << "Vielen Dank für die Nutzung des Programms! ENDE !";
    return 69;
}
