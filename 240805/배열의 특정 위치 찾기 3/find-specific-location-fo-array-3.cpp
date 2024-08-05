#include <iostream>
using namespace std;

int main() {
    int a[10], i;
    for(i = 0; i < 10; i++){
        cin >> a[i];
        if(!a[i]) break;
    }
    cout << a[i-1] + a[i-2] + a[i-3];
    return 0;
}