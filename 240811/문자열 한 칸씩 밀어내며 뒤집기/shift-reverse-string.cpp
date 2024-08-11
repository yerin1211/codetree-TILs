#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, c;
    int q, i, b;
    cin >> a >> q;
    c = a;
    while(q--){
        cin >> b;
        if(b == 1){
            a = a.substr(1, a.length()) + a[0];
        }
        else if(b == 2){
            a = a[a.length() - 1] + a.substr(0, a.length() - 1);
        }
        else{
            for(i = 0; i < a.length(); i++) c[a.length() - i - 1] = a[i];
            a = c;
        }
        cout << a << '\n';
    }
    return 0;
}