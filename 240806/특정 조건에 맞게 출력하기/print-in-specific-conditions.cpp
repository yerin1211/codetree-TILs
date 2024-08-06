#include <iostream>
using namespace std;

int main() {
    int a;
    for(int i = 0; i < 100; i++){
        cin >> a;
        if(!a) break;
        cout << (a % 2 ? a + 3 : a / 2) << ' ';
    }
    return 0;
}