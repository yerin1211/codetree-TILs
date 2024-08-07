#include <iostream>
using namespace std;

int main() {
    int n, a[1000] = {1, }, b, i, c = 1, m;
    cin >> n >> m;
    for(i = 2; i <= n; i++){
        cin >> b;
        if(m < b){
            m = b;
            a[c++] = i;
        }
    }
    while(c--) cout << a[c] << ' ';
    return 0;
}