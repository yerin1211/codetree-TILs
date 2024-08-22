#include <iostream>
using namespace std;

int main() {
    int n, k, a, b, m = 0;
    cin >> n >> k;
    int z[n + 1] = {};
    while(k--){
        cin >> a >> b;
        for(; a <= b; a++) z[a]++;
    }
    for(int i = 1; i <= n; i++) m = (m > z[i] ? m : z[i]);
    cout << m;
    return 0;
}