#include <iostream>
using namespace std;

int main() {
    int a[1001] = {}, n, b, i;
    cin >> n;
    while(n--){
        cin >> b;
        a[b]++;
    }
    for(i = 1000; i >= 1; i--) if(a[i] == 1) break;
    cout << (i? i : -1);
    return 0;
}