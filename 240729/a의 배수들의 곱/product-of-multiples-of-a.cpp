#include <iostream>
using namespace std;

int main() {
    int a, b, p = 1;
    cin >> a >> b;
    for(;b >= 1; b--) if(!(b % a)) p *= b;
    cout << p;
    return 0;
}