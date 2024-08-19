#include <iostream>
using namespace std;

void f(int n){
    if(!n) return;
    cout << n << ' ';
    f(n - 1);
    cout << n << ' ';
}

int main() {
    int n;
    cin >> n;
    f(n);
    return 0;
}