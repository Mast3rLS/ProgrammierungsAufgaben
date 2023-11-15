#include <iostream>
#include <iomanip>

using namespace std;


int main() {

    int num1, num2;

    cout << "Was ist die erste Zahl?\n";
    cin >> num1;

    cout << "Was ist die zweite Zahl?\n";
    cin >> num2;

    if (num1 > num2) {
        cout << num1;
    } else if (num1 < num2) {
        cout << num2;
    } else if (num1 == num2) {
        cout << num1 << " und " << num2;
    }

}   