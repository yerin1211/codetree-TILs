#include <iostream>
using namespace std;

int main() {
    int n, a[10001], i, s = 0, t = 0;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> a[i];
        s += a[i];
    }
    s /= n;
    for(i = 0; i < n; i++) if(a[i] > s) t += a[i] - s;
    cout << t;
    return 0;
}