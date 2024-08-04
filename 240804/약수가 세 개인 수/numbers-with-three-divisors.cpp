#include <iostream>
using namespace std;

int main() {
    int a, b, c = 0, d, i;
    cin >> a >> b;
    for(; a <= b; a++){
        d = 0;
        for(i = 1; i <= a; i++) if(!(a % i)) d++;
        if(d == 3) c++;
    }
    cout << c;
    return 0;
}