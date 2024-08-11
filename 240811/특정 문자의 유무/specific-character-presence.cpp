#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    cout << (a.find("ee") == -1 ? "No " : "Yes ") << (a.find("ab") == -1 ? "No" : "Yes");
    return 0;
}