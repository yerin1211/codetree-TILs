#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, i, c = 0;
    cin >> n;
    string a = to_string(n);
    for(i = 0; a[i] != '\0'; i++) c += a[i] - '0';
    cout << c;
    return 0;
}