#include <iostream>
using namespace std;

int main() {
    int a, n, m, c = 0;
    cin >> n >> m;
    while(n--){
        cin >> a;
        if(a == m) c++;
    }
    cout << c;
    return 0;
}