#include <iostream>
using namespace std;

int main() {
    int n, a = 0, c = 1;
    cin >> n;
    while(n){
        a += (n % 10) * c;
        c *= 2;
        n /= 10;
    }
    cout << a;
    return 0;
}