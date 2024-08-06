#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(!(a[i] % 2)) cout << a[i] << ' ';
    }
    return 0;
}