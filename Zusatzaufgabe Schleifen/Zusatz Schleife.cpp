#include <iostream>
#include <unistd.h>

using namespace std;


int main() {
    int j = 0, k = 0, i = 0;        // Variablendefinition
    while (j <= 10) {               // Kopfgesteuerte Schleife
        if (k < j) {
            k = k + 1;
            cout << "\nk = " << k;
            sleep(1);
        } else {
            j = j + 1;
            cout << "\nj = "<< j;
            sleep(1);
        }
    }
    for (i = 1; i <= 10; i++) {     // Zählerschleife
        j = j + i;
        cout << "\nj = " << j;
        sleep(1);
    }
    cout << "\n\n\nj = " << j << "\nk = " << k << "\ni = " << i;        // Ausgabe Ergebnis
}