#include <iostream>

using namespace std;


int main() {
    cout << "----------------------\n";
    cout << "Gerade oder Ungerade?\n";
    cout << "----------------------\n\n\n";

    int num, even;
    cout << "Gebe eine Zahl ein: ";
    cin >> num;

    even = num % 2;
    
    if (even == 0) {
        cout << "\n\nDie Zahl ist gerade!";
    } else if (even == 1) {
        cout << "\n\nDie Zahl ist nicht gerade!";
    }

    int again;
    cout << "\n\nMöchtest du noch mehr berechnen?   Ja[1]   Nein[2]\n";
    cin >> again;

    while (again == 1) {
        cout << "Gebe eine Zahl ein: ";
        cin >> num;

        even = num % 2;
    
        if (even == 0) {
            cout << "\n\nDie Zahl ist gerade!";
        } else if (even == 1) {
            cout << "\n\nDie Zahl ist nicht gerade!";
        }

        int again;
        cout << "\n\nMöchtest du noch mehr berechnen?   Ja[1]   Nein[2]\n";
        cin >> again;
    }
}