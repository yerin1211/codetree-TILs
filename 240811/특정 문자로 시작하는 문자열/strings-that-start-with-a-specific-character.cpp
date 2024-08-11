#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, i, c = 0, s = 0;
    string a[20]; char b;
    cin >> n;
    for(i = 0; i < n; i++) cin >> a[i];
    cin >> b;
    for(i = 0; i < n; i++) {
        if(a[i][0] == b){
            c++;
            s += a[i].length();
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << c << ' ' << (double)s / c;
    return 0;
}