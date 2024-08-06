#include <iostream>
using namespace std;

int main() {
    int a, b, t;
    cin >> a >> b;
    cout << a << ' ' << b << ' ';
    for(int i = 0; i < 8; i++){
        t = 2 * a + b;
        a = b;
        b = t;
        cout << b << ' ';
    }
    return 0;
}