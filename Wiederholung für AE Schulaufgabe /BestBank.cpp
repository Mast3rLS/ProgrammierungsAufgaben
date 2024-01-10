#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;

int main() {
    //output auf 2 Nachkommastellen gesetzt
    cout << fixed << setprecision(2);
    //Variablendefinition
    int  Monat, Nochmal = 1;
    double Zinssatz, Zinssatz2, Monatsbetrag, MonatsGewinn, MonatsGewinn2, Endgewinn;
    //Main Aufgabe
    while (Nochmal == 1) {
        //Intro
        cout << "Unser TOP-Angebot !! Nur im Januar möpglich !!!\n";
        sleep(1);
        cout << "Geben Sie die gewünschte Spardauer (in Monaten) ein: ";
        cin >> Monat;
        cout << "Geben Sie den gewünschten Monatssparbetrag ein: ";
        cin >> Monatsbetrag;
        //Check Spardauer und Einhaltung des Mindestbetrags
        if (Monat < 24) {
            Zinssatz = 0.0035;
            Zinssatz2 = 1.0035;
            while (Monatsbetrag < 10) {
                cout << "Der Mindestsparbetrag beträgt 10€!\n";
                cout << "Geben Sie den gewünschten Monatssparbetrag ein: ";
                cin >> Monatsbetrag;

            }
        } else if (Monat >= 24) {
            Zinssatz = 0.0034;
            Zinssatz2 = 1.0034;
            while (Monatsbetrag < 15) {
                cout << "Der Mindestsparbetrag beträgt 15€!\n";
                cout << "Geben Sie den gewünschten Monatssparbetrag ein: ";
                cin >> Monatsbetrag;
            }
        }
        Monat++;
        //Rechnung
        for (int i = 1; i < Monat; ++i) {
            cout << "\n";
            MonatsGewinn = Monatsbetrag * Zinssatz;
            MonatsGewinn2 = Monatsbetrag * (Zinssatz2 - 1);
            Endgewinn = Endgewinn + Monatsbetrag + MonatsGewinn2;
            cout << i << " - " << Monatsbetrag << " - " << MonatsGewinn << " - " << Endgewinn;
            Monatsbetrag = Monatsbetrag + MonatsGewinn2;
            sleep(1);
            cout << "\n";
        }
        //Ausgabe
        cout << "Am Ende der Laufzeit erhalten Sie " << Endgewinn << " Euro\n";
        cout << "Weitere Berechnung? --> ja(1)/nein(2) --> ";
        cin >> Nochmal;
        cout << "------------------\n\n";
    }
}