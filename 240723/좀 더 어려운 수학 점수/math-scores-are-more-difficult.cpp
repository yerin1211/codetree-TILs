#include <iostream>
using namespace std;

int main() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    if(a1 == b1) cout << (a2 > b2 ? "A" : "B");
    else cout << (a1 > b1 ? "A" : "B");
    return 0;
}