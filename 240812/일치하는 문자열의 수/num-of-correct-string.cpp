#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, c = 0;
    string a, b;
    cin >> n >> a;
    while(n--){
        cin >> b;
        if(a == b) c++;
    }
    cout << c;
    return 0;
}