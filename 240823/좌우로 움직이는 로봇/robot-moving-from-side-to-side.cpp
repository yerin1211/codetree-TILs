#include <iostream>
using namespace std;

int main() {
    int n, m, a[1000001], b[1000001], i, t, c, s = 0;
    char d;
    cin >> n >> m;

    i = 1; c = 0;
    while(n--){
        cin >> t >> d;
        if(d == 'R') for(t += i; i < t; i++) a[i] = ++c;
        else for(t += i; i < t; i++) a[i] = --c;
    }
    while(i <= 1000000) a[i++] = c;
    
    i = 1; c = 0;
    while(m--){
        cin >> t >> d;
        if(d == 'R'){
            for(t += i; i < t; i++){
                b[i] = ++c;
                if(a[i] == b[i] && a[i-1] != b[i-1]) s++;
            }
        } 
        else {
            for(t += i; i < t; i++) {
                b[i] = --c;
                if(a[i] == b[i] && a[i-1] != b[i-1]) s++;
            }
        }
    }
    for(;i <= 1000000; i++) {
        b[i] = c;
        if(a[i] == b[i] && a[i-1] != b[i-1]) s++;
    }
    cout << s;
    return 0;
}