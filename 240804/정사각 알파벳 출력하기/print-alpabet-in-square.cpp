#include <iostream>
using namespace std;

int main() {
    int n, i, j, c = 65;
    cin >> n;
    for(i = 1; i <= n; i++) for(j = 1; j <= n; j++) cout << (char)c++ << (j - n ? "" : "\n");
    return 0;
}