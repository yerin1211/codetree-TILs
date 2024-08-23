#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    if(a > 1 && b > 1) cout << "H";
    else if(a > 0.5 && b > 0.5) cout << "M";
    else cout << "L";
    return 0;
}