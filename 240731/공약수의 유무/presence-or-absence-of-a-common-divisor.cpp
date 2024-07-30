#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for(;a <= b; a++) if(!(1920 % a || 2880 % a)) break;
    cout << !(a > b);
    return 0;
}