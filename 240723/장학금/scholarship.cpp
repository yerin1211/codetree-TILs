#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a < 90 || b < 90) cout << 0;
    else cout << (b >= 95 ? 100000 : 50000);
    return 0;
}