#include <iostream>
using namespace std;

int main() {
    int n, a[1001] = {}, m = 0, c;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];

    c = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] - c > m) m = a[i] - c;
        if(a[i] < c) c = a[i];
    }
    cout << m;
    return 0;
}