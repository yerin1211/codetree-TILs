#include <iostream>
using namespace std;

int main() {
    int a, s = 0, t = 0;
    for(int i = 0; i < 10; i++){
        cin >> a;
        if(i % 2) s += a;
        else t += a;
    }
    cout << (s > t ? s - t : t - s);
    return 0;
}