#include <iostream>
using namespace std;

int main() {
    int a, b, t;
    cin >> a >> b;
    cout << a << ' ' << b << ' ';
    for(int i = 0; i < 8; i++){
        t = (a + b) % 10;
        a = b;
        b = t;
        cout << b << ' ';
    }
    return 0;
}