#include <iostream>
using namespace std;

int main() {
    int n, i, j, c = 1;
    cin >> n;
    int a[n][n];
    for(i = 0; i < n; i++) for(j = 0; j < n; j++) a[j][i] = c++;
    for(i = 0; i < n; i++) for(j = 0; j < n; j++) cout << a[i][j] << (j - n + 1 ? ' ' : '\n');
    return 0;
}