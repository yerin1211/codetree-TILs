#include <iostream>
using namespace std;

int main() {
    int n, m, i = 1, a[1000001] = {}, b[1000001] = {}, v, t, c = 0, f = 0;
    cin >> n >> m;

    while(n--){
        cin >> v >> t;
        for(t += i; i < t; i++) a[i] = a[i-1] + v;
    }
    
    i = 1;
    while(m--){
        cin >> v >> t;
        for(t += i; i < t; i++){
            b[i] = b[i-1] + v;
            if(!f && a[i] - b[i]) f = (a[i] > b[i] ? 1 : -1);
            else if(f > 0 && a[i] < b[i] || f < 0 && a[i] > b[i]){
                c++;
                f *= -1;
            }
        }
    }
    cout << c;
    return 0;
}