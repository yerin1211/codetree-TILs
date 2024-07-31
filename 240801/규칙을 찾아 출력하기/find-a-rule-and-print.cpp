#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++)
            cout << (i == 1 || j == 1 || i == n || j == n || j < i ? "* " : "  ");
        cout << '\n';
    }
    return 0;
}