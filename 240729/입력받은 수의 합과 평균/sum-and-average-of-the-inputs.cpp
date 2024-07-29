#include <iostream>
using namespace std;

int main() {
    int n, a, s = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        s += a;
    }
    cout << fixed;
    cout.precision(1);
    cout << s << ' ' << (float)s / n;
    return 0;
}