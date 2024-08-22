#include <iostream>
using namespace std;

int main() {
    int n, x1, x2, y1, y2, a[201][201] = {}, i, j, s = 0;
    cin >> n;
    while(n--){
        cin >> x1 >> y1 >> x2 >> y2;
        for(i = x1; i < x2; i++) for(j = y1; j < y2; j++) a[i+100][j+100] = 1;
    }
    for(i = 0; i <= 200; i++) for(j = 0; j <= 200; j++) s += a[i][j];
    cout << s;
    return 0;
}