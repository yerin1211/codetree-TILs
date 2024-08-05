#include <iostream>
using namespace std;

int main() {
    int a[10], i;
    for(i = 0; i < 10; i++){
        cin >> a[i];
        if(!a[i]) break;
    }
    for(i--; i >= 0; i--) cout << a[i] << ' ';
    return 0;
}