#include <iostream>
using namespace std;

int main() {
    int n, a, z[200001][3] = {}, c = 100000, i, d[3] = {};
    char b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(b == 'R'){
            for(i = c; i < c + a; i++){
                z[i][2]++;
                z[i][0] = 2;
            }
            c += a - 1;
        }
        else{
            for(i = c; i > c - a; i--){
                z[i][1]++;
                z[i][0] = 1;
            }
            c -= a - 1;
        }
    }
    for(i = 0; i <= 200000; i++){
        if(z[i][1] > 1 && z[i][2] > 1) d[0]++;
        else if(z[i][0] == 1) d[1]++;
        else if(z[i][0] == 2) d[2]++;
    }
    cout << d[1] << ' ' << d[2] << ' ' << d[0];
    return 0;
}