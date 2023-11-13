#include <iostream>
#include <iomanip>
#include <windows.h>

#pragma execution_character_set( "utf-8" )

using namespace std;


int main() {
    cout << "---------------\n";
    cout << "Firma Babyboom\n";
    cout << "---------------\n";

    int Gutschein = 0;

    int Ort;
    cout << "Woher kommen Sie?\nAschaffenburg[1]    Frankfurt[2]    Woanders[3]\n";
    cin >> Ort;

    int Kinder;
    cout << "Wie viele Kinder haben Sie?\n";
    cin >> Kinder;

    int AnzahlKinder;

    AnzahlKinder = Kinder - 2;

    if (Ort <= 2 && Kinder >= 2) {
        Gutschein = Gutschein + 100;
        if (AnzahlKinder > 0) {
            Gutschein = Gutschein + (AnzahlKinder * 25);
    }
    } else if (Ort == 3 || Kinder < 2) {
        Gutschein = Gutschein + 50;
    }

    int Weiblich;
    cout << "Sind Sie Weiblich?\n   Ja[1]   Nein[2]\n";
    cin >> Weiblich;

    if (Weiblich == 1) {
        Gutschein = Gutschein + 20;
    }


    cout << "Ihr Gutschein beträgt: " << Gutschein << " €.";




}