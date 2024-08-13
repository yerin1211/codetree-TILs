#include <iostream>
using namespace std;

void f(int n, int m){
    int a, b;
    if(n < m){
        a = m;
        m = n;
        n = a;
    }
    while(n % m != 0){
        a = n % m;
        n = m;
        m = a;
    }
    cout << m;
}

int main() {
    int n, m;
    cin >> n >> m;
    f(n, m);
    return 0;
}