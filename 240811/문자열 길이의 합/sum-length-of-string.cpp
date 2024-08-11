#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, s = 0, c = 0;
    string a;
    cin >> n;
    while(n--){
        cin >> a;
        s += a.length();
        if(a[0] == 'a') c++;
    }
    cout << s << ' ' << c;
    return 0;
}