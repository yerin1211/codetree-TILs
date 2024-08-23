#include <iostream>
using namespace std;

int dx[] = {1, 0, -1, 0}, dy[] = {0, -1, 0, 1};

int main() {
    int n, i, j, k, c = 0, s = 0;
    cin >> n;
    int a[n+2][n+2] = {};
    for(i = 1; i <= n; i++) for(j = 1; j <= n; j++) cin >> a[i][j];
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            for(k = c = 0; k < 4; k++) if(a[i+dx[k]][j+dy[k]]) c++;
            if(c >= 3) s++;
        }
    }
    cout << s;
    return 0;
}