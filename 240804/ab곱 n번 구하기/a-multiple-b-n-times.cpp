#include <iostream>
using namespace std;

int main() {
    int n, a, b, p;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        p = 1;
        for(; a <= b; a++) p *= a;
        cout << p << '\n';
    }
    return 0;
}