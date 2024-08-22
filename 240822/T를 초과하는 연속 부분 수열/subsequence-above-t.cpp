#include <iostream>
using namespace std;

int main() {
    int n, t, a, c = 0, m = 0;
    cin >> n >> t;
    while(n--){
        cin >> a;
        if(a <= t) c = -1;
        m = m > ++c ? m : c;
    }
    cout << m;
    return 0;
}