#include <iostream>
using namespace std;

bool f(int a[], int b[], int n1, int n2){
    int i, j;
    for(i = 0; i <= n1 - n2; i++){
        if(a[i] == b[0]){
            for(j = 0; j < n2; j++) if(a[i+j] != b[j]) break;
            if(j >= n2) return 1;
        }
    }
    return 0;
}

int main() {
    int n1, n2, i;
    cin >> n1 >> n2;
    int a[n1], b[n2];
    for(i = 0; i < n1; i++) cin >> a[i];
    for(i = 0; i < n2; i++) cin >> b[i];
    cout << (f(a, b, n1, n2) ? "Yes" : "No");
    return 0;
}