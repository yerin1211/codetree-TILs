#include <iostream>
using namespace std;

int main() {
    int a, b, s = 0;
    cin >> a >> b;
    for(;a <= b; a++) s += a;
    cout << s;
    return 0;
}