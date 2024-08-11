#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    for(int i = 0; i < b.length(); i++){
        if(b[i] == 'L') a = a.substr(1, a.length()) + a[0];
        else a = a[a.length() - 1] + a.substr(0, a.length() - 1);
    }
    cout << a << '\n';
    return 0;
}