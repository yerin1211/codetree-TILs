#include <iostream>
using namespace std;

int main() {
    int n, i, a, z[2001] = {}, c = 0;
    char b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(b == 'R'){
            for(i = c + 1; i <= c + a; i++) z[i+1000]++;
            c+= a;
        }
        else{
            for(i = c - 1; i >= c - a; i--) z[i+1000]++;
            c-= a;
        }
    }
    c = 0;
    for(i = 0; i <= 2000; i++) if(z[i] > 1) c++;
    cout << c;
    return 0;
}