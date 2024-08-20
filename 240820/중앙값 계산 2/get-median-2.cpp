#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(!(i % 2)){
            sort(a, a+i);
            cout << a[(i+1)/2] << ' ';
        }
    }
    return 0;
}