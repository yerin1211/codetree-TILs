#include <iostream>
using namespace std;

int main() {
    int n, m, i, d, a[1000000] = {}, b;
    char t;
    cin >> n >> m;
    b = i = 0;
    while(n--){
        cin >> t >> d;
        if(t == 'R') for(d += i; i < d; i++) a[i] = ++b;
        else for(d += i; i < d; i++) a[i] = --b;
    }

    b = i = 0;
    while(m--){
        cin >> t >> d;
        if(t == 'R'){
            for(d += i; i < d; i++) if(a[i] == ++b) break;
        }
        else {
            for(d += i; i < d; i++) if(a[i] == --b) break;
        }
        if(i - d) break;
    }
    cout << i+1;
    return 0;
}