#include <iostream>
using namespace std;

int main() {
    int a, b = 1001, s = 0;
    for(int i = 0; i < 10; i++){
        cin >> a;
        if(a > 500 && a < b) b = a;
        if(a < 500 && a > s) s = a;
    }
    cout << s << ' ' << b;
    return 0;
}