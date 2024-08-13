#include <iostream>
using namespace std;

bool g(int a){
    if(!(a % 3)) return 1;
    while(a > 0){
        if(!((a % 10) % 3) && a % 10) return 1;
        a /= 10;
    }
    return 0;
}

int f(int a, int b){
    int c = 0;
    for(; a <= b; a++) if(g(a)) c++;
    return c;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << f(a, b);
    return 0;
}