#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    int a[n][n];
    for(i = 0; i < n; i++) for(j = 0; j <= i; j++) a[i][j] = (j && j - i ? a[i-1][j-1] + a[i-1][j] : 1);
    for(i = 0; i < n; i++) for(j = 0; j <= i; j++) cout << a[i][j] << (j - i ? ' ' : '\n');
    return 0;
}