#include <iostream>
using namespace std;

int main() {
    int a, s = 0, c = 0;
    while(1){
        cin >> a;
        if(a < 20 || a > 29) break;
        s += a;
        c++;
    }
    cout << fixed;
    cout.precision(2);
    cout << (double)s / c;
    return 0;
}