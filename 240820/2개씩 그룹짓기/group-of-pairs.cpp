#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, i, j, la, lb, m;
    cin >> n;
    int a[n*2];
    for(i = 0; i < n*2; i++) cin >> a[i];
    sort(a, a + n*2);
    la = a[0];
    lb = a[n*2-1];
    m = la + lb;
    for(i = 1; i < n; i++){
        if(la == a[i] && lb == a[2*n-1-i]){
            for(j = 1; a[j] == a[i]; j++);
            swap(a[i], a[j]);
        }
        m = max(m, a[i] + a[2*n-1-i]);
        la = a[i];
        lb = a[2*n-1-i];
    }
    cout << m;
    return 0;
}