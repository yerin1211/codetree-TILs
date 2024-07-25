#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cin >> n;
    while(i <= n / 3) cout << i++ * 3 << ' ';
    return 0;
}