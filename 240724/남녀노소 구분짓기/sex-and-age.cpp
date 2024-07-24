#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a) cout << (b >= 19 ? "WOMAN" : "GIRL");
    else cout << (b >= 19 ? "MAN" : "BOY");
    return 0;
}