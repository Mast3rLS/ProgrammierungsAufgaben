#include <iostream>

using namespace std;


int main() {
    
    int x;

    cout << "Geben sie bitte 1, 2 oder 3 an:\n";
    cin >> x;

    switch (x) {
    case 1: cout << "Das war die erste Zahl";
        break;
    
    case 2: cout << "Das war die zweite Zahl";
        break;

    case 3: cout << "Das war die dritte Zahl";
        break;
        
    default: cout << "Das war eine falsche Zahl";
        break;
    }
}