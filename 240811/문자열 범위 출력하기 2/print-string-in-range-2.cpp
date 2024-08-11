#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int b;
    cin >> a >> b;
    for(int i = a.length() - 1; i >= 0 || a.length() - i >= b; i--) cout << a[i];
    return 0;
}