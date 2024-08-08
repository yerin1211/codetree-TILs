#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    int a[n][n];
    for(i = 0; i < n; i++) for(j = 0; j < n; j++) a[i][j] = (i && j ? a[i-1][j-1] + a[i][j-1] + a[i-1][j] : 1);
    for(i = 0; i < n; i++) for(j = 0; j < n; j++) cout << a[i][j] << (j - n + 1 ? ' ' : '\n');
    return 0;
}