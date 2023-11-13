#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    srand(time(0));

    vector<int> lottozahlen;

    for (int i = 1; i <= 19; ++i) {
        lottozahlen.push_back(i);
    }

    random_shuffle(lottozahlen.begin(), lottozahlen.end());


    vector<int> eingegebeneZahlen;

    cout << "Bitte geben Sie 6 Lottozahlen von 1 bis 19 ein:\n";
    for (int i = 0; i < 6; ++i) {
        int zahl;
        cin >> zahl;

        auto it = find(eingegebeneZahlen.begin(), eingegebeneZahlen.end(), zahl);
        if (it != eingegebeneZahlen.end()) {
            cout << "Diese Zahl wurde bereits eingegeben. Bitte geben Sie eine andere ein.\n";
            --i;
        } else if (zahl < 1 || zahl > 19) {
            cout << "Die eingegebene Zahl muss zwischen 1 und 19 liegen. Bitte versuchen Sie es erneut.\n";
            --i;
        } else {
            eingegebeneZahlen.push_back(zahl);
        }
    }

    int superzahl;
    cout << "\nBitte geben Sie die Superzahl von 1 bis 19 ein:\n";
    cin >> superzahl;

    if (superzahl < 1 || superzahl > 19) {
        cout << "Die eingegebene Superzahl muss zwischen 1 und 19 liegen. Bitte versuchen Sie es erneut.\n";
        return 1;
    }

    sort(eingegebeneZahlen.begin(), eingegebeneZahlen.end());

    vector<int> gezogeneZahlen(lottozahlen.begin(), lottozahlen.begin() + 6);
    sort(gezogeneZahlen.begin(), gezogeneZahlen.end());

    int ÜbereinstimmendeZahlen = 0;
    for (int zahl : eingegebeneZahlen) {
        if (binary_search(gezogeneZahlen.begin(), gezogeneZahlen.end(), zahl)) {
            ÜbereinstimmendeZahlen++;
        }
    }
    cout << ÜbereinstimmendeZahlen;

    int Superzahl = rand() % 19 + 1;

    cout << "\nDie Superzahl ist: " << Superzahl;

    return 0;
}
