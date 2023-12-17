#include <iostream>
#include <windows.h>
#include <stdlib.h>
#pragma execution_character_set( "utf-8" )

using namespace std;


int main() {
    SetConsoleOutputCP(65001);
    cout << "-------------------\n";
    cout << " Volumenberechnung\n";
    cout << "-------------------\n\n\n";

    double Länge, Breite, Höhe, Volumen;
    cout << "Geben Sie die Länge ein: ";
    cin >> Länge;
    cout << "Geben Sie die Breite ein: ";
    cin >> Breite;
    cout << "Geben Sie die Höhe ein: ";
    cin >> Höhe;

    Volumen = Länge * Breite * Höhe;
    cout << "\n\nVolumen: " << Volumen << " m³\n\n";

    string Nochmal;
    cout << "Möchten Sie eine weitere Berechnung durchführen? (Ja/Nein)\n";
    cin  >> Nochmal;
    if (Nochmal == "Ja" || Nochmal == "ja") {
        system("pause");
        system("CLS");
        main();
    }
}