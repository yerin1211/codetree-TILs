#include <iostream>
#include <string>
using namespace std;

int main() {
    string a; int s = 0;
    cin >> a;
    for(int i = 0; a[i] != '\0'; i++){
        if(a[i] >= '0' && a[i] <= '9') s += a[i] - '0';
    }
    cout << s;
    return 0;
}