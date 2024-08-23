#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b;
    c = b / (a * a / 10000.0);
    cout << c << (c >= 25 ? "\nObesity" : "");
    return 0;
}