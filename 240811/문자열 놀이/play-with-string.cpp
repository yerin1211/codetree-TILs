#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int q, a, b, c, i;
    char aa, bb;
    cin >> s >> q;
    while(q--){
        cin >> c;
        if(c == 1){
            cin >> a >> b;
            c = s[a-1];
            s[a-1] = s[b-1];
            s[b-1] = c;
        }
        else {
            for(i = 0; s[i] != '\0'; i++){
                cin >> aa >> bb;
                if(s[i] == aa) s[i] = bb;
            }
        }
        cout << s << '\n';
    }
    return 0;
}