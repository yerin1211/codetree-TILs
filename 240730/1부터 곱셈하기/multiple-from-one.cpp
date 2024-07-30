#include <iostream>
using namespace std;

int main() {
    int n, i, p = 1;
    cin >> n;
    for(i = 1; i <= n; i++){
        p *= i;
        if(p >= n) break;
    }
    cout << i;
    return 0;
}