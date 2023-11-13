#include <iostream>
#include <iomanip>

using namespace std;


int main() {

    cout << fixed;
    cout << setprecision(2);

    int Jahr;

    cout << "Gebe ein Jahr ein um zu berechnen, ob es sich um ein Schaltjahr handelt.\n";
    cin >> Jahr;


    if (Jahr % 4 == 0) {
        cout << "Das Jahr " << Jahr <<  " ist ein Schaltjahr!.\n";
    } else {
        cout << "Das Jahr " << Jahr << " ist kein Schaltjahr!.\n";
    }
}