#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, i, ml = 0, mr = 0, l1, l2, r1, r2;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(2));
    for(i = 0; i < n; i++){
        cin >> a[i][0] >> a[i][1];
        if(a[i][0] < a[ml][0]) ml = i;
        if(a[i][1] > a[mr][0]) mr = i;
    }
    l1 = l2 = 101;
    r1 = r2 = 0;
    for(i = 0; i < n; i++){
        if(ml != i && a[i][0] < l1) l1 = a[i][0];
        if(mr != i && a[i][0] < l2) l2 = a[i][0];
        if(ml != i && a[i][1] > r1) r1 = a[i][1];
        if(mr != i && a[i][1] > r2) r2 = a[i][1];
    }
    cout << (r1 - l1 < r2 - l2 ? r1 - l1 : r2 - l2);
    return 0;
}