#include <iostream>
using namespace std;

int main() {
    int n, m, k, i, b;
    cin >> n >> m >> k;
    int a[n+1] = {};
    while(m--){
        cin >> b;
        if(++a[b] == k) break;
    }
    cout << (m? b : -1);
    return 0;
}