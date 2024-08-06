#include <iostream>
using namespace std;

int main() {
    char a[6] = {'L', 'E', 'B', 'R', 'O', 'S'}, b;
    int i;
    cin >> b;
    for(i = 0; i < 6; i++) {
        if(a[i] == b) break;
    }
    if(i - 6) cout << i;
    else cout << "None";
    return 0;
}