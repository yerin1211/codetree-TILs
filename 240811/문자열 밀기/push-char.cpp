#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    a = a.substr(1, a.length()) + a[0];
    cout << a;
    return 0;
}