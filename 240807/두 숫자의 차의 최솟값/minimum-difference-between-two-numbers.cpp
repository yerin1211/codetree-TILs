#include <iostream>
using namespace std;

int main() {
    int n, m = 100, a[10] = {};
    cin >> n >> a[0];
    for(int i = 1; i < n; i++){
        cin >> a[i];
        if(a[i] - a[i-1] < m) m = a[i] - a[i-1];
    }
    cout << m;
    return 0;
}