#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int Stück, Jahre;
    double Stückpreis, Rabatt€, Preis;

    cout << fixed;
    cout << setprecision(2);

    cout << "Wie viel wird gekauft?\n";
    cin >> Stück;
    cout << "Wie hoch ist der Stückpreis?\n";
    cin >> Stückpreis;
    cout << "Wie lange ist der Kunde schon bei uns?\n";
    cin >> Jahre;

    Preis = Stück * Stückpreis;

    double RabattinProzent = Stück < 500 ? 0.02 : (Stück < 1000 ? 0.05 : 0.1);
    
    RabattinProzent = RabattinProzent + (Jahre > 10 && Stück > 1000 ? 0.05 : 0);

    Rabatt€ = Preis * RabattinProzent;
    RabattinProzent * 100;

    cout << "Sie erhalten insgesamt " << RabattinProzent << " % Rabatt.\n";
    cout << "Der Rabatt beträgt " << Rabatt€ << "€.";

}