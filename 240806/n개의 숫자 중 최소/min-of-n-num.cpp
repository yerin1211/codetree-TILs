#include <iostream>
using namespace std;

int main() {
    int n, a[100], m, c = 0;
    cin >> n;
    cin >> a[0];
    m = a[0];
    for(int i = 1; i < n; i++){
        cin >> a[i];
        m = (a[i] < m ? a[i] : m );
    } 
    for(int i = 0; i < n; i++) if(a[i] == m) c++;
    cout << m << ' ' << c;
    return 0;
}