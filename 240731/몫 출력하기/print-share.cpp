#include <iostream>
using namespace std;

int main() {
    int a, c = 0;
    while(1){
        cin >> a;
        if(!(a % 2)){
            cout << a / 2 << '\n';
            if(++c == 3) break;
        }
    }
    return 0;
}