#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    cout << a << '\n';
    for(int i = 0; i < a.length(); i++){
        a = a[a.length() - 1] + a.substr(0, a.length() - 1);
        cout << a << '\n';
    }
    return 0;
}