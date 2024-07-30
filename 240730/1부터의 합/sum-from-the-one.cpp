#include <iostream>
using namespace std;

int main() {
    int n, i, s = 0;
    cin >> n;
    for(i = 1; i <= n; i++){
        s += i;
        if(s >= n) break;
    }
    cout << i;
    return 0;
}