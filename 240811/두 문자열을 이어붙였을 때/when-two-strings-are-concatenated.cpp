#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    cout << (a + b == b + a ? "true" : "false");
    return 0;
}