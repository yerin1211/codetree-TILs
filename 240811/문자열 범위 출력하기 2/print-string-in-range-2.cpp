#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int b;
    cin >> a >> b;
    for(int i = 1; i <= b && i <= a.length(); i++ ) cout << a[a.length() - i];
    return 0;
}