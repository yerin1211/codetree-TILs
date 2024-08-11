#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    cout << (int)a + (int)b << ' ' << ((int)a - (int)b > 0 ? (int)a - (int)b : (int)b - (int)a);
    return 0;
}