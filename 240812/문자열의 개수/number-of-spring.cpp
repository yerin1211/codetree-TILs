#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b[100]; int c = 0;
    while(1){
        cin >> a;
        if(a == "0") break;
        if(++c % 2) b[c / 2] = a;
    }
    cout << c << '\n';
    for(int i = 0; i <= c / 2; i++) cout << b[i] << '\n';
    return 0;
}