#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, i, m;
    cin >> n;
    int a[n*2];
    for(i = 0; i < n*2; i++) cin >> a[i];
    sort(a, a + n*2);
    m = a[0] + a[n*2-1];
    for(i = 1; i < n; i++) m = max(m, a[i] + a[2*n-1-i]);
    cout << m;
    return 0;
}