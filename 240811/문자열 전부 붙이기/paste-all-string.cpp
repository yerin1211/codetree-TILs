#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string a = "", b;
    while(n--){
        cin >> b;
        a += b;
    }
    cout << a;
    return 0;
}