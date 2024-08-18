#include <iostream>
#include <string>
using namespace std;

bool f(string& a){
    char c = a[0];
    for(int i = 0; a[i] != '\0'; i++) if(a[i] != c) return 1;
    return 0;
}

int main() {
    string a;
    cin >> a;
    cout << (f(a) ? "Yes" : "No");
    return 0;
}