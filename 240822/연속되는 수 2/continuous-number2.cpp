#include <iostream>
using namespace std;

int main() {
    int n, a, b = -1, c = 0, m = 0;
    cin >> n;
    while(n--){
        cin >> a;
        if(a != b) {
            b = a;
            m = m > c ? m : c;
            c = 0;
        }
        c++;
    }
    cout << m;
    return 0;
}