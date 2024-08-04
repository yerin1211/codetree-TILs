#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++) cout << (i % 2 ? i * n - n + j : i * n - j + 1) << ' ';
        cout << '\n';
    }
    return 0;
}