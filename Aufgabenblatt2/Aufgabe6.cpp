#include <iostream>
#include <iomanip>

using namespace std;


int main() {

    cout << fixed;
    cout << setprecision(2);

    int Jahren;
    double Jahreseinkommen, Prämie, Prämiensatz;

    cout << "Was ist der Jahreseinkommen?\n";
    cin >> Jahreseinkommen;

    cout << "Wie viele Jahre arbeitet er schon?\n";
    cin >> Jahren;

    if (Jahren < 2) {
        Prämiensatz = 0.05;
    } else if (Jahren < 5) {
        Prämiensatz = 0.1;
    } else if (Jahren < 15) {
        Prämiensatz = 0.15;
    } else if (Jahren >= 15) {
        Prämiensatz = 0.20;
    }

    Prämie = Jahreseinkommen * Prämiensatz;
    Prämiensatz = Prämiensatz * 100;

    cout << "Der Vorjahreseinkommen liegt bei: " << Jahreseinkommen << " €.\n";
    cout << "Die Arbeitsdauer liegt bei: " << Jahren << " Jahren.\n";
    cout << "Sie erhalten: " << Prämiensatz << " % Prämie.\n";
    cout << "Die Prämie liegt bei: " << Prämie << " €"; 


}