#include <iostream>
#include <string>
using namespace std;

string y[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
int m[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    d1 = d2 - d1 + 1;
    for(; m1 < m2; m1++) d1 += m[m1];
    cout << y[d1 % 7];
    return 0;
}