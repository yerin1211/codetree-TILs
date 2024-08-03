#include <iostream>
using namespace std;

int main() {
    int n, c = 2;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << c << ' ';
            c = (c == 8 ? 2 : c + 2);
        }
        cout << '\n';
    }
    return 0;
}