#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    for(i = 1; i <= n * 2 + 1; i++){
        for(j = 1; j <= n * 2 + 1; j++)
            cout << (!(i % 2 || j % 2) ? "  " : "* ");
        cout << '\n';
    }
    return 0;
}