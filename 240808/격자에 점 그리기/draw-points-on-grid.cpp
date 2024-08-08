#include <iostream>
using namespace std;

int main() {
    int n, m, r, c, i, j;
    cin >> n >> m;
    int a[n][n] = {};
    for(i = 1; i <= m; i++){
        cin >> r >> c;
        a[r-1][c-1] = i;
    }
    for(i = 0; i < n; i++) for(j = 0; j < n; j++) cout << a[i][j] << (j - n + 1 ? ' ' : '\n');
    return 0;
}