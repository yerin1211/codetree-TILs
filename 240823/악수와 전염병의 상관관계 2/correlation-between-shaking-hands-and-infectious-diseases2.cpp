#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int gam[101], jun[101];

int main() {
    int n, k, p, t, i;
    cin >> n >> k >> p >> t;
    gam[p] = 1;
    jun[p] = k;
    vector<vector<int>> a(t, vector<int>(3));
    for(i = 0; i < t; i++) cin >> a[i][0] >> a[i][1] >> a[i][2];
    sort(a.begin(), a.end());
    for(i = 0; i < t; i++){
        if(gam[a[i][1]] && jun[a[i][1]]){
            jun[a[i][1]]--;
            if(!gam[a[i][2]]){
                gam[a[i][2]] = 1;
                jun[a[i][2]] = k;
                continue;
            }
        }
        if(gam[a[i][2]] && jun[a[i][2]]){
            jun[a[i][2]]--;
            if(!gam[a[i][1]]){
                gam[a[i][1]] = 1;
                jun[a[i][1]] = k;
            }
        }
    }
    for(i = 1; i <= n; i++) cout << gam[i];
    return 0;
}