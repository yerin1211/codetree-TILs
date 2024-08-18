#include <iostream>
using namespace std;

int n;

void f(int a[]){
    for(int i = 0; i < n; i++) if(a[i] < 0) a[i] *= -1;
}

int main() {
    int a[50], i;
    cin >> n;
    for(i = 0; i < n; i++) cin >> a[i];
    f(a);
    for(i = 0; i < n; i++) cout << a[i] << ' ';
    return 0;
}