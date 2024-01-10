#include <iostream>

using namespace std;


int main() {
    cout << "-------------\n";
    cout << " Von I bis X\n";
    cout << "-------------\n\n\n";

    int i, x;
    cout << "Was ist der Startwert?\n";
    cin >> i;
    cout << "Was ist der Stoppwert?\n";
    cin >> x;

    if (i < x) {
        do {
            cout << i << ", ";
            i++;
        } while (i < x);
    } else if (i > x) {
        do {
            cout << i << ", ";
            i--;
        } while (i > x);
    }
    cout << x;
}