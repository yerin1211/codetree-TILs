#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a && b >= 19) cout << 'W';
    else if(a) cout << 'G';
    else if(!a && b >= 19) cout << 'M';
    else cout << 'B';
    return 0;
}