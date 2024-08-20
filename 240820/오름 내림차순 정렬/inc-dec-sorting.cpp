#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int n, a[100], i;
    cin >> n;
    for(i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(i = 0; i < n; i++) cout << a[i] << ' ';
    cout << '\n';
    sort(a, a + n, greater<int>());
    for(i = 0; i < n; i++) cout << a[i] << ' ';
    return 0;
}