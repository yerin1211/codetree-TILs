#include <iostream>
using namespace std;

int main() {
    int n, a[10], b, i;
    cin >> n >> b;
    do{
        a[i++] = n % b;
        n /= b;
    }while(n);
    for(i--; i >= 0; i--) cout << a[i];
    return 0;
}