#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    for(int i = 1; i <= 10; i++){
        cin >> a;
        if(i % 2) cout << a << '\n';
    }
    return 0;
}