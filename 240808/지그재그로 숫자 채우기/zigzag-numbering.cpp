#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, c = 0;
    cin >> n >> m;
    int a[n][m];
    for(j = 0; j < m; j++){
        if(j % 2) for(i = n - 1; i >= 0; i--) a[i][j] = c++;
        else for(i = 0; i < n; i++) a[i][j] = c++;
    }
    for(i = 0; i < n; i++) for(j = 0; j < m; j++) cout << a[i][j] << (j - m + 1 ? ' ' : '\n');
    return 0;
}