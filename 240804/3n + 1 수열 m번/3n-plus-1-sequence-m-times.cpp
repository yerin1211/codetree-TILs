#include <iostream>
using namespace std;

int main() {
    int m, n, c;
    cin >> m;
    while(m--){
        cin >>n;
        c = 0;
        while(n != 1){
            c++;
            if(n % 2) n = n * 3 + 1;
            else n /= 2;
        }
        cout << c << '\n';
    }
    return 0;
}