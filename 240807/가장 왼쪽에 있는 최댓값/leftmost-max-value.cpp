#include <iostream>
using namespace std;

int main() {
    int n, a[1001] = {}, i, m = 0;
    cin >> n;
    for(i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i] > a[m]) m = i;
    }
    while(1){
        cout << m << ' ';
        if(m-- == 1) break;
        for(i = m; i >= 1; i--) if(a[i] >= a[m]) m = i;
    }
    return 0;
}