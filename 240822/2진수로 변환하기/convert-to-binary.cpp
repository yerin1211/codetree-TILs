#include <iostream>
using namespace std;

int main() {
    int n, a[20], i = 0;
    cin >> n;
    while(n){
        a[i++] = n % 2;
        n /= 2;
    }
    for(--i; i >= 0; i--) cout << a[i];
    return 0;
}