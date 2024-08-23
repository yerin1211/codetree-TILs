#include <iostream>
using namespace std;

int main() {
    int n, m, a[101], i, c = 0, s = 1;
    cin >> n >> m;
    for(i = 0; i < n; i++){
        cin >> a[i];
        if(++c > 2*m+1 && a[i]){
            c = 0;
            s++;
        }
    }
    cout << s;
    return 0;
}