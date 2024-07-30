#include <iostream>
using namespace std;

int main() {
    int n, i;
    cin >> n;
    for(i = 2; i < n; i++) if(!(n % i)) break;
    cout << (i == n ? 'P' : 'C');
    return 0;
}