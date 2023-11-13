#include <iostream>
#include <iomanip>

using namespace std;


int main() {

    double Umsatz, Provision;

    cout << fixed;
    cout << setprecision(2);
    
    cout << "Was ist der Umsatz?\n";
    cin >> Umsatz;

    if (Umsatz >= 100000) {
        Provision = Umsatz * 0.075;
        cout << "Deine Provision ist " << Provision << "€.";
    } else {
        Provision = Umsatz * 0.05;
        cout << "Deine Provision ist " << Provision << "€.";
    }





}