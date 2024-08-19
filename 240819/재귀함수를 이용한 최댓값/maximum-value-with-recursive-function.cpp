#include <iostream>
#include <algorithm>
using namespace std;

int a[100];

int f(int n){
    if(!n--) return a[0];
    return max(f(n), a[n]);
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << f(n-1);
    return 0;
}