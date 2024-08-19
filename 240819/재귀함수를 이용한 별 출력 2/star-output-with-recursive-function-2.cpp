#include <iostream>
using namespace std;

void f(int n){
    if(!n) return;
    for(int i = 0; i < n; i++) cout << "* ";
    cout << '\n';
    f(n - 1);
    for(int i = 0; i < n; i++) cout << "* ";
    cout << '\n';
}

int main() {
    int n;
    cin >> n;
    f(n);
    return 0;
}