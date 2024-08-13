#include <iostream>
using namespace std;

int f(int n){
    int s = 0;
    for(int i = 1; i <= n; i++) s += i;
    return s / 10;
}

int main() {
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}