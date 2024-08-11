#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, i, d = 0;
    cin >> a >> b;
    string c = to_string(a + b);
    for(i = 0; c[i] != '\0'; i++) if(c[i] == '1') d++;
    cout << d;
    return 0;
}