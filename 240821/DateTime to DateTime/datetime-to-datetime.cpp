#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    a = (a - 11) * 24 * 60 + (b - 11) * 60 + c - 11;
    cout << (a < 0 ? -1 : a);
    return 0;
}