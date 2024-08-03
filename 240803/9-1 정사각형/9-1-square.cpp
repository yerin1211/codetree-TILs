#include <iostream>
using namespace std;

int main() {
    int n, i, j, c = 9;
    cin >> n;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            cout << c;
            c = (c == 1 ? 9 : c - 1);
        }
        cout << '\n';
    }
    return 0;
}