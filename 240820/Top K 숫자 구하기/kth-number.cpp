#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, i, k;
    cin >> n >> k;
    int a[n];
    for(i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    cout << a[k-1];
    return 0;
}