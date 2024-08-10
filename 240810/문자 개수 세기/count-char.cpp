#include <iostream>
#include <string>
using namespace std;

int main() {
    string a; char b; int c = 0;
    getline(cin, a);
    cin >> b;
    for(int i = 0; i < a.length(); i++) if(a[i] == b) c++;
    cout << c;
    return 0;
}