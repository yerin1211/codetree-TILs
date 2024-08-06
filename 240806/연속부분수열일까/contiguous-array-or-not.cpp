#include <iostream>
using namespace std;

int main() {
    int n1, n2, a[100], b[100], i, j;
    cin >> n1 >> n2;
    for(i = 0; i < n1; i++) cin >> a[i];
    for(i = 0; i < n2; i++) cin >> b[i];
    for(i = 0; i <= n1-n2; i++){
        if(a[i] == b[0]){
            for(j = 0; j < n2; j++) if(a[i+j] != b[j]) break;
            if(j == n2) break;
        }
    }
    cout << (i > n1 - n2 ? "No" : "Yes");
    return 0;
}