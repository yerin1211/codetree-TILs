#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2, a[2001][2001] = {}, i, j;
    cin >> x1 >> y1 >> x2 >> y2;
    for(i = x1; i < x2; i++) for(j = y1; j < y2; j++) a[i+1000][j+1000] = 1;
    cin >> x1 >> y1 >> x2 >> y2;
    for(i = x1; i < x2; i++) for(j = y1; j < y2; j++) a[i+1000][j+1000] = 0;
    x1 = y1 = 3000; 
    x2 = y2 = -3000;
    for(i = 0; i < 2001; i++){
        for(j = 0; j < 2001; j++){
            if(!a[i][j]) continue;
            x1 = x1 < i ? x1 : i;
            y1 = y1 < j ? y1 : j;
            x2 = x2 > i ? x2 : i;
            y2 = y2 > j ? y2 : j;
        }
    }
    cout << (x1 - 3000 ? (x2 - x1 + 1) * (y2 - y1 + 1) : 0);
    return 0;
}