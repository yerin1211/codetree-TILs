#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, a, i, s = 0;
    cin >> n;
    while(n--){
        cin >> a;
        s += a;
    }
    string b = to_string(s);
    cout << b.substr(1, b.length()) + b[0];
    return 0;
}