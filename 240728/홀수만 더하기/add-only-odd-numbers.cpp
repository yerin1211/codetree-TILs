#include <iostream>
using namespace std;

int main() {
    int n, a, s = 0;
    cin >> n;
    while(n--){
        cin >> a;
        if(a % 2 && !(a % 3)) s += a;
    }
    cout << s;
    return 0;
}