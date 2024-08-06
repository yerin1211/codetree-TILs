#include <iostream>
using namespace std;

int main() {
    int a = 1, b, t;
    cin >> b;
    while(a <= 100){
        cout << a << ' ';
        t = a + b;
        a = b;
        b = t;
    }
    cout << a;
    return 0;
}