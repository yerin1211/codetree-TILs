#include <iostream>
using namespace std;

int main() {
    int a, s = 0, i;
    for(i = 0; i < 10; i++){
        cin >> a;
        if(a >= 250) break;
        s += a;
    }
    cout << fixed;
    cout.precision(1);
    cout << s << ' ' << (double)s / i;
    return 0;
}