#include <iostream>
using namespace std;

int main() {
    int n, k, a, b, m = 0;
    cin >> n;
    int z[201] = {};
    while(n--){
        cin >> a >> b;
        for(; a < b; a++) z[a+100]++;
    }
    for(int i = 0; i <= 200; i++) m = (m > z[i] ? m : z[i]);
    cout << m;
    return 0;
}