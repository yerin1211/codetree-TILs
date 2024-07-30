#include <iostream>
using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    while(n > 1){
        n /= 2;
        c++;
    }
    cout << c;
    return 0;
}