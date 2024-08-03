#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    for(i = 1; i <= n; i++){
        if(i % 2) for(j = 1; j <= n; j++) cout << j;
        else for(j = n; j >= 1; j--) cout << j;
        cout << '\n';
    }
    return 0;
}