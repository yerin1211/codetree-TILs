#include <iostream>
using namespace std;

void f(int &n, int &m){
    int t = n;
    n = m;
    m = t;
}

int main() {
    int n, m;
    cin >> n >> m;
    f(n, m);
    cout << n << ' ' << m;
    return 0;
}