#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    for(i = 1; i <= n; i++) for(j = 1; j <= n - i + 1; j++) cout << i << " * " << j << " = " << i * j << (j - n + i - 1 ? " / " : "\n");
    return 0;
}