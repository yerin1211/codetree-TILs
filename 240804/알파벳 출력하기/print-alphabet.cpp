#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    char c = 'A';
    cin >> n;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            cout << c++;
            if(c > 'Z') c = 'A';
        }
        cout << '\n';
    }
    return 0;
}