#include <iostream>
using namespace std;

int main() {
    int n, i, j, c = 1;
    cin >> n;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++) cout << (i % 2 ? c++ : c--) << ' ';
        c += (i % 2 ? n - 1 : n + 1);
        cout << '\n';
    }
    return 0;
}