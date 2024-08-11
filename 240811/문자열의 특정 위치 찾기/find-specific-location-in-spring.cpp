#include <iostream>
#include <string>
using namespace std;

int main() {
    string a; char b;
    cin >> a >> b;
    if(a.find(b) == -1) cout << "No";
    else cout << a.find(b);
    return 0;
}