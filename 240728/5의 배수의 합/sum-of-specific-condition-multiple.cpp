#include <iostream>
using namespace std;

int main() {
    int a, b, s = 0;
    cin >> a >> b;
    if(a <= b) {
        for(; a <= b; a++) if(!(a % 5)) s += a;
    }
    else {
        for(; b <= a; b++) if(!(b % 5)) s += b;
    }
    cout << s;
    return 0;
}