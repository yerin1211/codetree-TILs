#include <iostream>
using namespace std;

int main() {
    int n, s = 0;
    cin >> n;
    for(int i = 1; i < n; i++) if(!(n % i)) s += i;
    cout << (n == s ? 'P' : 'N');
    return 0;
}