#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2, i, j, a[2001][2001] = {}, s = 0;
    cin >> x1 >> y1 >> x2 >> y2;
    for(i = x1; i < x2; i++) for(j = y1; j < y2; j++) a[i+1000][j+1000] = 1;
    cin >> x1 >> y1 >> x2 >> y2;
    for(i = x1; i < x2; i++) for(j = y1; j < y2; j++) a[i+1000][j+1000] = 1;
    cin >> x1 >> y1 >> x2 >> y2;
    for(i = x1; i < x2; i++) for(j = y1; j < y2; j++) a[i+1000][j+1000] = 0;
    for(i = 0; i < 2001; i++) for(j = 0; j < 2001; j++) s += a[i][j];
    cout << s;
    return 0;
}