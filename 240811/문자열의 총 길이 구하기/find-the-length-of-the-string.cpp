#include <iostream>
#include <string>
using namespace std;

int main() {
    string a; int c = 0;
    for(int i = 0; i < 10; i++){
        cin >> a;
        c += a.length();
    }
    cout << c;
    return 0;
}