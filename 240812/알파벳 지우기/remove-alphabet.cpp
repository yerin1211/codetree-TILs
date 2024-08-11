#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string a, b, aa = "", bb = ""; int i;
    cin >> a >> b;
    for(i = 0; a[i] != '\0'; i++) if(isdigit(a[i])) aa += a[i];
    for(i = 0; b[i] != '\0'; i++) if(isdigit(b[i])) bb += b[i];
    cout << stoi(aa) + stoi(bb);
    return 0;
}