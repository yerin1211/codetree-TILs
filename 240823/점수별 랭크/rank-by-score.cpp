#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n >= 90) cout << 'S';
    else if(n >= 80) cout << 'A';
    else if(n >= 70) cout << 'B';
    else if(n >= 60) cout << 'C';
    else cout << 'F';
    return 0;
}