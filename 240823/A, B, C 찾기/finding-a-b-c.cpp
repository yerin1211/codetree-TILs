#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int i, a[7], min, max;
    for(i = 0; i < 7; i++) cin >> a[i];
    sort(a, a + 7);
    cout << a[0] << ' ' << a[1] << ' ' << a[6] - a[0] - a[1];
    return 0;
}