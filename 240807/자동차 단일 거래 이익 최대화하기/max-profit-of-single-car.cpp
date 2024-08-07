#include <iostream>
using namespace std;

int main() {
    int n, a[1001] = {}, m = 0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++) if(a[j] - a[i] > m) m = a[j] - a[i];
    }
    cout << m;
    return 0;
}