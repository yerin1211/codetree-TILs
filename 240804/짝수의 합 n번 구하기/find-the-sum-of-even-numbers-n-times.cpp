#include <iostream>
using namespace std;

int main() {
    int n, a, b, i, j, s;
    cin >> n;
    while(n--){
        s = 0;
        cin >> a >> b;
        if(a % 2) a++;
        for(i = a; i <= b; i += 2) s += i;
        cout << s << '\n';
    }
    return 0;
}