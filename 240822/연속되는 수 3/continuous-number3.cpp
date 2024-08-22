#include <iostream>
using namespace std;

int main() {
    int n, a, c = 0, m = 0, f = 0;
    cin >> n;
    while(n--){
        cin >> a;
        if(a * f <= 0){
            c = 0;
            f = a;
        }
        c++;
        m = m > c ? m : c;
    }
    cout << m;
    return 0;
}