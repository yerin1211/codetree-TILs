#include <iostream>
using namespace std;

int main() {
    int a, s = 0, t = 0, c = 0;
    for(int i = 0; i < 10; i++){
        cin >> a;
        if(i % 2) s += a;
        if(!((i + 1) % 3)){
            t += a;
            c++;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << s << ' ' << (double)t / c;
    return 0;
}