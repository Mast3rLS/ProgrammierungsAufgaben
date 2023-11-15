#include <iostream>

using namespace std;


int main() {
    int zahl1,zahl2,zahl3,zahl4;
    zahl1 = 3 * 2;
    zahl2 = zahl3 = zahl1 * 2;
    zahl3 = zahl3 * 2;
    zahl4 = zahl3 / 4;
    zahl1 = zahl2 * zahl4 + zahl3;

    cout << "Das Ergebnis lautet: " << zahl1 << endl;
}

int main() {

}