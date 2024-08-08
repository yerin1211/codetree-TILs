#include <iostream>
using namespace std;

int main() {
    int a[2][4], i, j, s[4] = {}, t, u = 0;
    cout << fixed;
    cout.precision(1);
    for(i = 0; i < 2; i++){
        t = 0;
        for(j = 0; j < 4; j++){
            cin >> a[i][j];
            s[j] += a[i][j];
            t += a[i][j];
            u += a[i][j];
        }
        cout << t / 4.0 << ' ';
    } 
    cout << '\n';
    for(i = 0; i < 4; i++) cout << s[i] / 2.0 << ' ';
    cout << '\n' << u / 8.0;
    return 0;
}