#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 5, t;
    t = a; a = b; b = t;
    cout << a << endl << b;
    return 0;
}