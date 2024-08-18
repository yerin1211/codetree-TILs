#include <iostream>
#include <string>
using namespace std;

bool f(string a){
    for(int i = 0; i <= a.length() / 2; i++) if(a[i] != a[a.length() - i - 1]) return 0;
    return 1;
}

int main() {
    string a;
    cin >> a;
    cout << (f(a) ? "Yes" : "No");
    return 0;
}