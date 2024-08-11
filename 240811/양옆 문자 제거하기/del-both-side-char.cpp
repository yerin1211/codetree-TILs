#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    a.erase(1, 1);
    a.erase(a.length() - 2, 1);
    cout << a;
    return 0;
}