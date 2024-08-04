#include <iostream>
using namespace std;

int main() {
    int n, i, j, c = 1;
    cin >> n;
    for(i = 1; i <= n; i++){
        for(j = 1; j < i; j++) cout << "  ";
        for(j = 0; j <= n - i; j++) cout << c++ << ' ';
        if(c == 10) c = 1;
        cout << '\n';
    }
    return 0;
}