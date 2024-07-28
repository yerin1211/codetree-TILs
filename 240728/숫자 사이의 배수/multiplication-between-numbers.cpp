#include <iostream>
using namespace std;

int main() {
    int a, b, c = 0, s = 0;
    cin >> a >> b;
    for(;a <= b; a++){
        if(!(a % 5) || !(a % 7)){
            c++; s += a;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << s << ' ' << (float)s / c;
    return 0;
}