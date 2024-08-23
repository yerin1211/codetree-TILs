#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, i, j, l, r, m = 101;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(2));
    for(i = 0; i < n; i++) cin >> a[i][0] >> a[i][1];
    for(i = 0; i < n; i++){
        l = 101; r = 0;
        for(j = 0; j < n; j++){
            if(i == j) continue;
            l = (a[j][0] < l ? a[j][0] : l);
            r = (a[j][1] > r ? a[j][1] : r);
        }
        m = (r - l < m ? r - l : m);
    }
    cout << m;
    return 0;
}