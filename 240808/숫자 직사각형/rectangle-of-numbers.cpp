#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, c = 1;
    cin >> n >> m;
    int a[n][m] = {};
    for(i = 0; i < n; i++) for(j = 0; j < m; j++) a[i][j] = c++;
    for(i = 0; i < n; i++) for(j = 0; j < m; j++) cout << a[i][j] << (j - m + 1 ? " " : "\n");
    return 0;
}