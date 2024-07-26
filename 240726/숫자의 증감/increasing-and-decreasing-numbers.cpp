#include <iostream>
using namespace std;

int main() {
    char c;
    int n;
    cin >> c >> n;
    if(c == 'A') for(int i = 1; i <= n; i++) cout << i <<' ';
    else while(n) cout << n-- << ' ';
    return 0;
}