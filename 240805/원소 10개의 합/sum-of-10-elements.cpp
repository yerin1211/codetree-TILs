#include <iostream>
using namespace std;

int main() {
    int a, s = 0;
    for(int i = 0; i < 10; i++){
        cin >> a;
        s += a;
    }
    cout << s;
    return 0;
}