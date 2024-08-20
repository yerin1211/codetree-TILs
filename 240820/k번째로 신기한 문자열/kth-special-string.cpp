#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n, k, i, c = 0;
    string a[100], t;
    cin >> n >> k >> t;
    for(i = 0; i < n; i++){
        cin >> a[c];
        if(!a[c].rfind(t, 0)) c++;
    } 
    sort(a, a + c);
    cout << a[k-1];
    return 0;
}