#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << fixed;
    cout.precision(1);
    cout << a + b << " " << (a + b) / 2.0;
    return 0;
}