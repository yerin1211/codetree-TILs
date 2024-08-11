#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int b;
    cin >> a;
    while(a.length() > 1){
        cin >> b;
        a.erase((b < a.length() ? b: a.length() - 1), 1);
        cout << a << '\n';
    }
    return 0;
}