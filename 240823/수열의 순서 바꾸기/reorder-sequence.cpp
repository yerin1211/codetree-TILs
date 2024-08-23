#include <iostream>

using namespace std;

int main() {
    int n, i, a[101];
    cin >> n;
    for(i = 0; i < n; i++) cin >> a[i];
    for(i = n-1; i >= 1; i--) if(a[i-1] > a[i]) break;
    cout << i;
    return 0;
}