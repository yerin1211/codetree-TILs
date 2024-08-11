#include <iostream>
#include <string>
using namespace std;

int main() {
    string a; char b, c;
    cin >> a;
    b = a[0];
    c = a[1];
    for(int i = 0; a[i] != '\0'; i++){
        if(a[i] == b) a[i] = c;
        else if(a[i] == c) a[i] = b;
    }
    cout << a;
    return 0;
}