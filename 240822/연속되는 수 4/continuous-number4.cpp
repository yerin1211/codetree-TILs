#include <iostream>
using namespace std;

int main() {
    int n, a, c = 0, m = 0, b = 2000;
    cin >> n;
    while(n--){
        cin >> a;
        if(a <= b) c = 0;
        b = a;
        c++;
        m = m > c ? m : c;
    }
    cout << m;
    return 0;
}