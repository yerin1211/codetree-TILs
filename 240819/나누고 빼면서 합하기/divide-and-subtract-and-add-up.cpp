#include <iostream>
using namespace std;

int n, m, a[100];

int f(){
    int s = a[m-1];
    while(m != 1){
        if(m % 2) m--;
        else m /= 2;
        s += a[m-1];
    }
    return s;
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << f();
    return 0;
}