#include <iostream>

using namespace std;


int main() {
    cout << "-----------------------------\n";
    cout << "Kinda ein Taschenrechner lol\n";
    cout << "-----------------------------\n\n\n";

    int num1, num2, Ergebnis;
    cout << "Gebe die Zahlen ein die du berechnen möchtest.\n";
    cin >> num1;
    cout << "Und\n";
    cin >> num2;

    char Rechenzeichen;
    cout << "\nMit welches Rechenzeichen berechnen wir?\n";
    cin >> Rechenzeichen;

    if (Rechenzeichen == '+') {
        Ergebnis = num1 + num2;
        cout << "Dein Ergebnis ist: " << Ergebnis;
    } else if (Rechenzeichen == '-') {
        Ergebnis = num1 - num2;
        cout << "Dein Ergebnis ist: " << Ergebnis;
    } else if (Rechenzeichen == '*') {
        Ergebnis = num1 * num2;
        cout << "Dein Ergebnis ist: " << Ergebnis;
    } else if (Rechenzeichen == '/') {
        Ergebnis = num1 / num2;
        cout << "Dein Ergebnis ist: " << Ergebnis;
    }
}