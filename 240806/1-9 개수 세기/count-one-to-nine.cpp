#include <iostream>
using namespace std;

int main() {
    int n, a, c[10] = {};
    cin >> n;
    while(n--){
        cin >> a;
        c[a]++;
    }
    for(int i = 1; i <= 9; i++) cout << c[i] << '\n';
    return 0;
}