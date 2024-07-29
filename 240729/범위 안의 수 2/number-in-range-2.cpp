#include <iostream>
using namespace std;

int main() {
    int a, c = 0, s = 0;
    for(int i = 0; i < 10; i++){
        cin >> a;
        if(a > 0 && a <= 200){
            c++;
            s += a;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << s << ' ' << (float)s / c;
    return 0;
}