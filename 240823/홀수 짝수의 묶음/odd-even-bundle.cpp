#include <iostream>
using namespace std;

int main() {
    int n, i, a[1000], e = 0, o = 0, s = 0;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> a[i];
        a[i] % 2 ? o++ : e++;
    }
    while(e || o){
        if(s % 2 && o) o--; 
        else if(s % 2) break;
        else if(e) e--;
        else if(o != 4) o -= 2;
        else o -= 4;
        s++;
    }
    cout << s;
    return 0;
}