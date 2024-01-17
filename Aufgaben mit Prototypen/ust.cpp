#include <iostream>
#include "Aufgabe3.h"

using namespace std;

void ust(double netto, int umsatzsteuersatz) {
    // Calculate and output the Umsatzsteuerbetrag
    double umsatzsteuer = netto * (umsatzsteuersatz / 100.0);
    cout << "Umsatzsteuerbetrag: " << umsatzsteuer << "\n";
}

