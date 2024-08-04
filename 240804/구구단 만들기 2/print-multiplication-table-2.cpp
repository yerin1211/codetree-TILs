#include <iostream>
using namespace std;

int main() {
    int a, b, i, j;
    cin >> a >> b;
    for(i = 2; i <= 8; i += 2){
        for(j = b; j >= a; j--) cout << j << " * " << i << " = " << i * j << (j - a ? " / " : "");
        cout << '\n';
    }
    return 0;
}