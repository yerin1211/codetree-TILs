#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, i, c = 0, d[30];
    string n;
    cin >> a >> b >> n;
    for(i = 0; n[i]; i++) c = c * a + n[i] - '0';
    i = 0;
    do{
        d[i++] = c % b;
        c /= b;
    }while(c);
    for(i--; i >= 0; i--) cout << d[i];
    return 0;
}