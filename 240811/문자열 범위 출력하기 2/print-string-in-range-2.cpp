#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int b;
    cin >> a >> b;
    for(int i = a.length() - 1; i >= 0 && i >= a.length() - b; i--) cout << a[i];
    return 0;
}