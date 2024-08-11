#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    for(int i = (a.length() % 2 ? a.length() - 2 : a.length() - 1); i >= 0; i -= 2) cout << a[i];
    return 0;
}