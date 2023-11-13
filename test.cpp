#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    float f = 10.5389742;

    float value1 = round(f * 100) / 100;
    cout << fixed << setprecision(2) << f << '\n';

    float d = 10.5;
 
    float value2 = floor(d * 100) / 100;
    cout << fixed << setprecision(2) << d << '\n';
    

    
}