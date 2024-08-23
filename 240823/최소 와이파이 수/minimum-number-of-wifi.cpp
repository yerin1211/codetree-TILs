#include <iostream>
using namespace std;

int main() {
    int n, m, a[101], i, c = 0, s = 0;
    cin >> n >> m;
    for(i = 0; i < n; i++){
        cin >> a[i];
        if(++c > 2*m && a[i]){
            c = 0;
            s++;
        }
    }
    if(c) s++;
    cout << s;
    return 0;
}