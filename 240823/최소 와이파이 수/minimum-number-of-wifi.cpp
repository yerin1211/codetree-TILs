#include <iostream>
using namespace std;

int main() {
    int n, m, a[101], i, s = 0;
    cin >> n >> m;
    for(i = 0; i < n; i++) cin >> a[i];
    for(i = 0; i < n; i++){
        if(a[i]){
            s++;
            i += m*2;
        }
    }
    cout << s;
    return 0;
}