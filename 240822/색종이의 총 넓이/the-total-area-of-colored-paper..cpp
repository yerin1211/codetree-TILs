#include <iostream>
using namespace std;

int main() {
    int n, i, j, a[201][201] = {}, x, y, s = 0;
    cin >> n;
    while(n--){
        cin >> x >> y;
        for(i = 0; i < 8; i++) for(j = 0; j < 8; j++) a[x+i+100][y+j+100] = 1;
    }
    for(i = 0; i < 201; i++) for(j = 0; j < 201; j++) s += a[i][j];
    cout << s;
    return 0;
}