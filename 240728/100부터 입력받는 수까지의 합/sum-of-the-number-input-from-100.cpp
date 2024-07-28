#include <iostream>
using namespace std;

int main() {
    int n, s = 0; 
    cin >> n;
    for(; n <= 100; n++) s += n;
    cout << s;
    return 0;
}