#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, i, a[200001], m;
    cin >> n;
    for(i = 0; i < 2*n; i++) cin >> a[i];
    sort(a, a + 2*n);
    m = a[n] - a[0];
    for(i = 1; i < n; i++) m = min(m, a[n+i] - a[i]);
    cout << m;
    return 0;
}