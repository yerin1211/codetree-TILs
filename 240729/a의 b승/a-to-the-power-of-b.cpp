#include <iostream>
using namespace std;

int main() {
    int a, b, p = 1;
    cin >> a >> b;
    while(b--) p *= a;
    cout << p;
    return 0;
}