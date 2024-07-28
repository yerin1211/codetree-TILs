#include <iostream>
using namespace std;

int main() {
    int a, b, s = 0;
    cin >> a >> b;
    for(; a <= b; a++) if(!(a % 2)) s += a;
    cout << s;
    return 0;
}