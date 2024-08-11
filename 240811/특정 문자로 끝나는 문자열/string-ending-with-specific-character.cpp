#include <iostream>
using namespace std;

int main() {
    string a[10]; char c; int b = 1;
    for(int i = 0; i < 10; i++) cin >> a[i];
    cin >> c;
    for(int i = 0; i < 10; i++){
        if(a[i][a[i].length() - 1] == c) {
            b = 0;
            cout << a[i] << '\n';
        }
    }
    if(b) cout << "None";
    return 0;
}