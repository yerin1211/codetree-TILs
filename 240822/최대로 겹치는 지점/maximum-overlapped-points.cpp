#include <iostream>
using namespace std;

int main() {
    int n, a, b, m = 0;
    cin >> n;
    int z[101] = {};
    while(n--){
        cin >> a >> b;
        for(; a <= b; a++) z[a]++;
    }
    for(int i = 1; i <= 100; i++) m = (m > z[i] ? m : z[i]);
    cout << m;
    return 0;
}