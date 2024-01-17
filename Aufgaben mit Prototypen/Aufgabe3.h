#include <iostream>
#include <iomanip>

using namespace std;

void ust(double netto, double umsatzsteuersatz) {

    double umsatzsteuer = netto * (umsatzsteuersatz / 100.0);
    cout << "Umsatzsteuer: " << umsatzsteuer << " €\n";
}