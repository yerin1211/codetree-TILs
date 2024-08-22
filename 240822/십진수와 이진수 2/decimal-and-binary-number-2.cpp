#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    int a = 0, i, b[35];
    cin >> n;
    for(i = 0; n[i]; i++) a = a * 2 + n[i] - '0';
    a *= 17; 
    i = 0;
    do{
        b[i++] = a % 2;
        a /= 2;    
    } while(a);
    for(i--; i >= 0; i--) cout << b[i];
    return 0;
}