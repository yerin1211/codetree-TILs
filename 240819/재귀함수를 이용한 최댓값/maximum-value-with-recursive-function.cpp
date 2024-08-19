#include <iostream>
using namespace std;

int a[100];

int f(int n, int m){
    if(!n--) return m;
    if(a[n] > m) return f(n, a[n]);
    else return f(n, m);
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << f(n, 0);
    return 0;
}