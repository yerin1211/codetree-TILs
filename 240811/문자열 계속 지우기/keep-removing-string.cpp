#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    while(a.find(b) != -1) a.erase(a.find(b), b.length());
    cout << a;
    return 0;
}