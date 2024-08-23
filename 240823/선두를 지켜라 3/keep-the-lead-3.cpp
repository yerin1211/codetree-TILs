#include <iostream>
using namespace std;

int a[1000001], b[1000001];

int main() {
    int n, m, i, v, t, c, f = 0, s = 0;
    cin >> n >> m;

    i = 1;
    while(n--){
        cin >> v >> t;
        for(t += i; i < t; i++) a[i] = a[i-1] + v;
    }

    i = 1;
    while(m--){
        cin >> v >> t;
        for(t += i; i < t; i++) {
            b[i] = b[i-1] + v;
            if(!f && a[i] - b[i] || f < 0 && a[i] >= b[i] || f > 0 && a[i] <= b[i]){
                f = a[i] - b[i];
                s++;
            }
        }
    }
    cout << s;
    return 0;
}