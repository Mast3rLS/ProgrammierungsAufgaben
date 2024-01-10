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
        for (i; i < x; i++) {
            cout << i << ", ";
        }
    } else if (i > x) {
        for (i; i > x; i--) {
            cout << i << ", ";
        }
    }
    cout << x;
}