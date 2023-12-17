#include <iostream>
#include <unistd.h>
#pragma execution_character_set( "utf-8" )

using namespace std;


int main() {
    cout << "----------------\n";
    cout << " Taschenrechner\n";
    cout << "----------------\n\n";

    double Wert1, Wert2, Ergebnis;
    string Rechenzeichen;
    cout << "Geben Sie Wert 1 ein: ";
    cin >> Wert1;
    cout << "Geben Sie Wert 2 ein: ";
    cin >> Wert2;
    cout << "Geben Sie die Kennzahl für die Rechenoperation ein:";
    cin >> Rechenzeichen;
    if (Rechenzeichen == "/" && (Wert1 == 0 || Wert2 == 0)) {
        cout << "Eine Division durch 0 ist nicht möglich!";
        sleep(2);
        system("CLS");
        main();
    }

    if (Rechenzeichen == "+") {
        Ergebnis = Wert1 + Wert2;
    } else if (Rechenzeichen == "-") {
        Ergebnis = Wert1 - Wert2;
    } else if (Rechenzeichen == "*") {
        Ergebnis = Wert1 * Wert2;
    } else if (Rechenzeichen == "/") {
        Ergebnis = Wert1 / Wert2;
    }
    cout << "Das Ergebnis ist: " << Ergebnis;
    string Nochmal;
    cout << "\n\nMöchten Sie noch eine weitere Rechnung durchführen? (Ja/Nein)\n";
    cin >> Nochmal;
    if (Nochmal == "Ja" || Nochmal == "ja") {
        cout << "Press any key to continue\n\n\n";
        system("pause");
        system("CLS");
        main();
    }
}