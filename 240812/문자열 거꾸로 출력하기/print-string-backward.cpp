#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    while(1){
        cin >> a;
        if(a == "END") break;
        for(int i = a.length() - 1; i >= 0; i--) cout << a[i];
        cout << '\n';
    }
    return 0;
}