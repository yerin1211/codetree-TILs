#include <iostream>
using namespace std;

int main() {
    int c[10] = {}, a;
    while(1){
        cin >> a;
        if(!a) break;
        c[(a % 100) / 10]++;
    }
    for(int i = 1; i <= 9; i++) cout << i << " - " << c[i] << '\n';
    return 0;
}