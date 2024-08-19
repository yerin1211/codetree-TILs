#include <iostream>
using namespace std;

int f(int n){
    if(!n) return 0;
    return n % 10 + f(n / 10);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << f(a * b * c);
    return 0;
}