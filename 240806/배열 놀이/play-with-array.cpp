#include <iostream>
using namespace std;

int main() {
    int n, q, i, j, a[100], b, c, d;
    cin >> n >> q;
    for(i = 0; i < n; i++) cin >> a[i];
    for(i = 0; i < q; i++){
        cin >> b >> c;
        if(b == 1) cout << a[c-1];
        else if(b == 2){
            for(j = 0; j < n; j++) if(a[j] == c) break;
            cout << (j - n ? j+1 : 0);
        }
        else{
            cin >> d;
            for(j = c-1; j < d; j++) cout << a[j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}