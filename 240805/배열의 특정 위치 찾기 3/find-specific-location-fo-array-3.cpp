#include <iostream>
using namespace std;

int main() {
    int a[100], i;
    for(i = 0; i < 100; i++){
        cin >> a[i];
        if(!a[i]) break;
    }
    cout << a[i-1] + a[i-2] + a[i-3];
    return 0;
}