#include <iostream>
#include <ctime>

using namespace std;


int main() {
    int Geheimzahl = 0, Zahl;
    srand(time(0));
    Zahl = rand() % 100 + 1;

    cout << "Geben Sie die Geheimzahl ein: ";
    cin >> Geheimzahl;

    while(Zahl != Geheimzahl) {
        if(Zahl < Geheimzahl) {
            cout << "\nDie eingegebene Geheimzahl ist zu hoch.";
        } else if (Zahl > Geheimzahl) {
            cout << "\nDie eingegebene Geheimzahl ist zu niedrig.";
        }
        cout << "\nGeben Sie die Geheimzahl ein: ";
        cin >> Geheimzahl;
    }

    cout << "\nHurra! Sie haben die Zahl erraten!";
}