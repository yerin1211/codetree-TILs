#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    for(i = 1; i <= n; i++){
        for(j = n - i + 1; j <= n; j++) cout << j << ' ';
        cout << '\n';
    }
    return 0;
}