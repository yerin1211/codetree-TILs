#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << a << (a < 0 ? "\nminus" : "");
    return 0;
}