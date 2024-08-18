#include <iostream>
using namespace std;

int n;

void f(int *a){
    for(int i = 0; i < n; i++) if(!(a[i] % 2)) a[i] /= 2;
}

int main() {
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    f(a);
    for(int i = 0; i < n; i++) cout << a[i] << ' ';
    return 0;
}