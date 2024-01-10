#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;

int main() {
    cout << fixed;
    cout << setprecision(2);
    cout << "-------------------\n";
    cout << "Parkschein-Automat\n";
    cout << "-------------------\n\n\n";
    sleep(500);
    double Tagesticket = 5, Einwurf, Differenz, NEinwurf;

    cout << "Das Tagesticket kostet 5 €.\n";
    cout << "Bitte werfen Sie nur 10 Cent, 20 Cent, 50 Cent,\n1 Euro oder 2 Euro ein!\n";
    cout << "Bitte Geld einwerfen: ";
    cin >> Einwurf;
    if((Einwurf == 0.10 ||Einwurf == 0.20||Einwurf == 0.50||Einwurf == 1||Einwurf == 2)) {
    } else {
        cout << "Falsche Eingabe. Versuche eine andere Münze!\n";
        Einwurf = 0;
    }

    while (Einwurf < Tagesticket) {
        Differenz = Tagesticket - Einwurf;
        cout << "Restbetrag: " << Differenz << " Euro\n";
        cin >> NEinwurf;
        if((NEinwurf == 0.10 ||NEinwurf == 0.20||NEinwurf == 0.50||NEinwurf == 1||NEinwurf == 2)) {
        } else {
            cout << "Falsche Eingabe. Versuche eine andere Münze!\n";
            NEinwurf = 0;
        } 
        Einwurf = Einwurf + NEinwurf;
    }

    cout << "Ticket wird gedruckt.";
    
    if (Einwurf > Tagesticket) {
        Differenz = Einwurf - Tagesticket;
        cout << " Sie Erhalten " << Differenz << " Euro zurück.";
    }
}