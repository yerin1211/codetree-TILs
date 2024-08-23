#include <iostream>
using namespace std;

int main() {
    int n, m, a[101], i, c = 0, s = 0, b = 0;
    cin >> n >> m;
    for(i = 0; i < n; i++){
        cin >> a[i];
        b += a[i];
        if(++c > 2*m && a[i]){
            b = c = 0;
            s++;
        }
    }
    if(b) s++;
    cout << s;
    return 0;
}