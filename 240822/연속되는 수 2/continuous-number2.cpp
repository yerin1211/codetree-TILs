#include <iostream>
using namespace std;

int main() {
    int n, a, b = -1, c = 0, m = 0;
    cin >> n;
    while(n--){
        cin >> a;
        if(a != b) {
            b = a;
            c = 0;
        }
        c++;
        m = m > c ? m : c;
    }
    cout << m;
    return 0;
}