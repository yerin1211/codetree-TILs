#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, i;
    cin >> n;
    int a[n], b[n];
    for(i = 0; i < n; i++) cin >> a[i];
    for(i = 0; i < n; i++) cin >> b[i];
    sort(a, a + n);
    sort(b, b + n);
    for(i = 0; i < n; i++) if(a[i] != b[i]) break;
    cout << (i - n ? "No" : "Yes");
    return 0;
}