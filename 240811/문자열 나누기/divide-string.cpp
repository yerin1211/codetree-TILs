#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b = ""; int n;
    cin >> n;
    while(n--){
        cin >> a;
        b += a;
    }
    for(int i = 0; i < b.length(); i++) cout << b[i] << ((i+1) % 5 ? "" : "\n");
    return 0;
}