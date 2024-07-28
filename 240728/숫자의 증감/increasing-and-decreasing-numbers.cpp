#include <iostream>
using namespace std;

int main() {
    char c; int n, i = 0;
    cin >> c >> n;
    if(c == 'A') while(n - i) cout << ++i <<' ';
    else while(n) cout << n-- << ' ';
    return 0;
}