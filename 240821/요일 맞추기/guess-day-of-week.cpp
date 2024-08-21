#include <iostream>
#include <string>
using namespace std;

string y[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
int m[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int f(int a, int b){
    for(int i = 1; i < a; i++) b += m[i];
    return b;
}

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    d1 = f(m2, d2) - f(m1, d1) + 1;
    cout << y[d1 % 7];
    return 0;
}