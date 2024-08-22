#include <iostream>
using namespace std;

int main() {
    int n, a, z[200001] = {}, c = 100000, i, d = 0, e = 0;
    char b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(b == 'R'){
            for(i = c; i < c + a; i++) z[i] = 2;
            c += a - 1;
        }
        else{
            for(i = c; i > c - a; i--) z[i] = 1;
            c -= a - 1;
        }
    }
    for(i = 0; i <= 200000; i++){
        if(z[i] == 1) d++;
        else if(z[i] == 2) e++;
    }
    cout << d << ' ' << e;
    return 0;
}