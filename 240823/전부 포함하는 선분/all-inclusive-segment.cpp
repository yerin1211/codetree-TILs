#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(vector<int> &a, vector<int> &b){
    return a[1] > b[1];
}

int main() {
    int n, i, l, m;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(2));
    for(i = 0; i < n; i++) cin >> a[i][0] >> a[i][1];
    sort(a.begin(), a.end());
    m = a[1][0] - a[0][0];
    l = a[0][0];
    sort(a.begin(), a.end(), cmp);
    m = max(m, a[0][1] - a[1][1]);
    cout << a[0][1] - l - m;
    return 0;
}