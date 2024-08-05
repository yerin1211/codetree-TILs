#include <iostream>
using namespace std;

int main() {
    int a, s = 0, c = 0;
    for(int i = 0; i < 10; i++){
        cin >> a;
        if(!a) break;
        if(!(a % 2)){
            s += a;
            c++;
        }
    }
    cout << c << ' ' << s;
    return 0;
}