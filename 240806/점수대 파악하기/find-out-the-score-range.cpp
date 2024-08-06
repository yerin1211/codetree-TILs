#include <iostream>
using namespace std;

int main() {
    int a, c[11] = {};
    for(int i = 0; i < 100; i++){
        cin >> a;
        if(!a) break;
        c[a/10]++;
    }
    for(int i = 10; i >= 1; i--) cout << i*10 << " - " << c[i] << '\n';
    return 0;
}