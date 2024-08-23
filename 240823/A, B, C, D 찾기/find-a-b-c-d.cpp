#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[15];
    for(int i = 0; i < 15; i++) cin >> a[i];
    sort(a, a + 15);
    cout << a[0] << ' ' << a[1] << ' ' << a[2] << ' ' << a[14] - a[0] - a[1] - a[2];
    return 0;
}