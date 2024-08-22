#include <iostream>
using namespace std;

int main() {
    int n, i, j, a[201][201] = {}, x1, x2, y1, y2, s = 0;
    cin >> n;
    for(int f = 0; f < n; f++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(i = x1; i < x2; i++) for(j = y1; j < y2; j++) a[i+100][j+100] = (f % 2 ? 2 : 1);
    }
    for(i = 0; i < 201; i++) for(j = 0; j < 201; j++) if(a[i][j] == 2) s++;
    cout << s;
    return 0;
}