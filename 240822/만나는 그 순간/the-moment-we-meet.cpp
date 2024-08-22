#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, d, a[1000000] = {}, b;
    char t;
    cin >> n >> m;
    b = i = 0;
    while(n--){
        cin >> t >> d;
        if(t == 'R') for(d += i; i < d; i++) a[i] = ++b;
        else for(d += i; i < d; i++) a[i] = --b;
    }

    b = j = 0;
    while(m--){
        cin >> t >> d;
        if(t == 'R'){
            for(d += j; j < d; j++) if(a[j] == ++b) break;
        }
        else {
            for(d += j; j < d; j++) if(a[j] == --b) break;
        }
        if(j - d) break;
    }
    cout << (i - j ? j + 1 : -1);
    return 0;
}