#include <iostream>
using namespace std;

bool f(int a){
    if(a == 1) return 0;
    for(int i = 2; i <= a / 2; i++) if(!(a % i)) return 0;
    return 1;
}

int main() {
    int a, b, c = 0;
    cin >> a >> b;
    for(; a <= b; a++) if(f(a)) c += a;
    cout << c;
    return 0;
}