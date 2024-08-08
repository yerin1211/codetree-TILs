#include <iostream>
using namespace std;

int main() {
    int a[4][4], i, j, s = 0;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            cin >> a[i][j];
            if(j <= i) s += a[i][j];
        }
    }
    cout << s;
    return 0;
}