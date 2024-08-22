#include <iostream>
using namespace std;

int main() {
    double a = 12.3, b = 70;
    cout << fixed;
    cout.precision(2);
    cout << a << "     " << b << "     " << a + b;
    return 0;
}