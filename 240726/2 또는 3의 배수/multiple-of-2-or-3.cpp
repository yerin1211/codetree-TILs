#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cout << (!(i % 2) || !(i % 3)) << ' ';
    return 0;
}