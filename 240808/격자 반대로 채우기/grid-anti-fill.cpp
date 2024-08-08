#include <iostream>
using namespace std;

int main() {
    int n, i, j, c = 1;
    cin >> n;
    int a[n][n];
    for(j = n - 1; j >= 0; j--){
        if((n - j) % 2) for(i = n - 1; i >= 0; i--) a[i][j] = c++;
        else for(i = 0; i < n; i++) a[i][j] = c++;
    }
    for(i = 0; i < n; i++) for(j = 0; j < n; j++) cout << a[i][j] << (j - n + 1 ? ' ' : '\n');
    return 0;
}