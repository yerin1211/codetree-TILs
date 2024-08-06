#include <iostream>
using namespace std;

int main() {
    char a; int b, c[4] = {};
    for(int i = 0; i < 3; i++){
        cin >> a >> b;
        if(a == 'Y' && b >= 37) c[0]++;
        else if(a == 'N'&& b >= 37) c[1]++;
        else if(a == 'Y') c[2]++;
        else c[3]++;
    }
    for(int i = 0; i < 4; i++) cout << c[i] << ' ';
    if(c[0] > 1) cout << 'E';
    return 0;
}