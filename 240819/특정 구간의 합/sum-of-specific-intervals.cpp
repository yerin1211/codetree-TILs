#include <iostream>
using namespace std;

int a[101];

int f(int a1, int a2){
    int s = 0;
    for(int i = a1; i <= a2; i++) s += a[i];
    return s;
}

int main() {
    int n, m, i, a1, a2;
    cin >> n >> m;
    for(i = 1; i <= n; i++) cin >> a[i];
    for(i = 0; i < m; i++){
        cin >> a1 >> a2;
        cout << f(a1, a2) << '\n';
    }
    return 0;
}