#include <iostream>
using namespace std;

int f(int a, int b){
    if(b == 0) return a;
    return f(b, a % b);
}

int main() {
    int n, a, b;
    cin >> n >> a;
    b = a;
    for(int i = 1; i < n; i++){
        cin >> a;
        b = a * b / f(b, a);
    }
    cout << b;
    return 0;
}