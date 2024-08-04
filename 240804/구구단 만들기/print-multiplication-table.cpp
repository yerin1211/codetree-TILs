#include <iostream>
using namespace std;

int main() {
    int a, b, i, j;
    cin >> a >> b;
    for(i = 1; i <= 9; i++){
        for(j = b; j >= a; j -= 2) cout << j << " * " << i << " = " << i * j << (j - a ? " / " : "");
        cout << '\n';
    }
    return 0;
}