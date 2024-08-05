#include <iostream>
using namespace std;

int main() {
    int n, a, i, j, s, c = 0;
    cin >> n;
    for(i = 0; i < n; i++){
        s = 0;
        for(j = 0; j < 4; j++){
            cin >> a;
            s += a;
        }
        if(s >= 240){
            cout << "pass\n";
            c++;
        }
        else cout << "fail\n";
    }
    cout << c;
    return 0;
}