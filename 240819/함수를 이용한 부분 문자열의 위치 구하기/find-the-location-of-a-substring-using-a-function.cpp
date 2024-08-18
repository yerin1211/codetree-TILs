#include <iostream>
#include <string>
using namespace std;

string a, b;

int f(){ return a.find(b); }

int main() {
    cin >> a >> b;
    cout << f();
    return 0;
}