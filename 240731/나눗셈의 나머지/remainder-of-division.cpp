#include <iostream>
using namespace std;

int main() {
    int a, b, c[501] = {0}, s = 0;
    cin >> a >> b;
    while(a > 1){
        c[a % b]++;
        a /= b;
    }
    for(int i = 0; i < 501; i++) s += c[i] * c[i];
    cout << s;
    return 0;
}