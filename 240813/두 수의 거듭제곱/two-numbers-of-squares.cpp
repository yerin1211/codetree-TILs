#include <iostream>
using namespace std;

int f(int a, int b){
    int s = 1;
    while(b--) s *= a;
    return s;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << f(a, b);
    return 0;
}