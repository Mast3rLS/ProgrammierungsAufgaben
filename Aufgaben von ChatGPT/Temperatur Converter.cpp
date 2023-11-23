#include <iostream>

using namespace std;


int main() {
    cout << "-----------------------\n";
    cout << "Temperature Conversion\n";
    cout << "-----------------------\n\n\n";

    int choice = 0;
    double Celsius, Fahrenheit = 0;

    do {
        cout << "Enter your Temperatur in Celsius: ";
        cin >> Celsius;

        Fahrenheit = 1.8 * Celsius + 32;

        cout << "Fahrenheit: " << Fahrenheit << "\n";
        cout << "Do you want to calculate more?   Yes[1]  No[2]\n";
        cin >> choice;
    } while (choice == 1);

}