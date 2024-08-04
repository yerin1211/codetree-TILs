#include <iostream>
using namespace std;

int main() {
    int s, e, c = 0, i, k;
    cin >> s >> e;
    for(; s <= e; s++){
        k = 0;
        for(i = 1; i <= s / 2 + 1; i++) if(!(s % i)) k += i;
        if(k == s) c++;
    }
    cout << c;
    return 0;
}