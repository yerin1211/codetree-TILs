#include <iostream>
using namespace std;

int main() {
    int a, f = 0;
    cin >> a;
    for(int b = a;; b += a){
        cout << b << ' ';
        if(!(b % 5) && f) break;
        if(!(b % 5)) f = 1;
    }
    return 0;
}