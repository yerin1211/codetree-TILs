#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b; int i;
    cin >> a >> b;
    for(i = 1; i <= a.length(); i++){
        a = a[a.length() - 1] + a.substr(0, a.length() - 1);
        if(a == b) break;
    }
    cout << (i > a.length() ? -1 : i);
    return 0;
}