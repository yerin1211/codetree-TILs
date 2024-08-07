#include <iostream>
using namespace std;

int main() {
    int a, s;
    for(int i = 0; i < 4; i++){
        s = 0;
        for(int j = 0; j < 4; j++){
            cin >> a;
            s += a;
        }
        cout << s << '\n';
    }
    return 0;
}