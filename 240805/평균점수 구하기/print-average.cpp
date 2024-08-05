#include <iostream>
using namespace std;

int main() {
    double a, s = 0;
    for(int i = 0; i < 8; i++){
        cin >> a;
        s += a;
    }
    cout << fixed;
    cout.precision(1);
    cout << s / 8;
    return 0;
}