#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    for(; a <= b; a++) if(!(a % c)) break;
    cout << (a > b ? "YES" : "NO");
    return 0;
}