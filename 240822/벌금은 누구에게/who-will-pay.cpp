#include <iostream>
using namespace std;

int main() {
    int n, m, k, i, b;
    cin >> n >> m >> k;
    int a[n+1] = {};
    for(i = 0; i < m; i++){
        cin >> b;
        if(++a[b] == k) break;
    }
    cout << (m - i ? b : -1);
    return 0;
}