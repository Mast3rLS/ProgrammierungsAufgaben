#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;

int main() {
    //output auf 2 Nachkommastellen gesetzt
    cout << fixed;
    cout << setprecision(2);
    //Variablendefinition
    int Spardauer, Monat, Nochmal = 1;
    double Zinssatz, Zinssatz2, Monatsbetrag, MonatsGewinn, MonatsGewinn2, Endgewinn;

    while (Nochmal == 1) {
        cout << "Unser TOP-Angebot !! Nur im Januar möpglich !!!\n";
        sleep(1);
        cout << "Geben Sie die gewünschte Spardauer (in Monaten) ein: ";
        cin >> Monat;
        cout << "Geben Sie den gewünschten Monatssparbetrag ein: ";
        cin >> Monatsbetrag;
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
        for (int i = 1; i < Monat; ++i) {
            cout << "\n";
            MonatsGewinn = Monatsbetrag * Zinssatz;
            MonatsGewinn2 = Monatsbetrag * Zinssatz2;
            cout << i << " - " << Monatsbetrag << " - " << MonatsGewinn << " - " << MonatsGewinn2;
            Monatsbetrag = Monatsbetrag + MonatsGewinn2;
            sleep(1);
            cout << "\n";
        }
        cout << "Am Ende der Laufzeit erhalten Sie " << Monatsbetrag << " Euro\n";
        cout << "Weitere Berechnung? --> ja(1)/nein(2) --> ";
        cin >> Nochmal;
        cout << "------------------\n\n";
    }
}