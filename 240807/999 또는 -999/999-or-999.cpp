#include <iostream>
using namespace std;

int main() {
    int a, max = -999, min = 999;
    while(1){
        cin >> a;
        if(a == 999 || a == -999) break;
        max = (max < a ? a : max);
        min = (min < a ? min : a);
    }
    cout << max << ' ' << min;
    return 0;
}