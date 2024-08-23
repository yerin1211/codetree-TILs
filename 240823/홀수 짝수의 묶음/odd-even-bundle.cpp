#include <iostream>
using namespace std;

int main() {
    int n, i, a[1001], e = 0, o = 0, s = 0, f = 0;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> a[i];
        a[i] % 2 ? o++ : e++;
    }
    while(e || o){
        if(f) o--; 
        else if(e) e--;
        else if(o != 4) o -= 2;
        else o -= 4;
        s++, f ^= 1;
    }
    cout << s;
    return 0;
}