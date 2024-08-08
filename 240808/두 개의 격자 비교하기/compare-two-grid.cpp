#include <iostream>
using namespace std;

int main() {
    int n, m , i, j;
    cin >> n >> m;
    int a[n][m], b;
    for(i = 0; i < n; i++) for(j = 0; j < m; j++) cin >> a[i][j];
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++) {
            cin >> b;
            cout << !!(a[i][j] - b) << ' ';
        }
        cout << '\n';
    }
    return 0;
}