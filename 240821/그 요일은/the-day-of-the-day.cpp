#include <iostream>
#include <string>
using namespace std;

string y[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
int m[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int f(int a, int b){
    for(int i = 1; i < a; i++) b += m[i];
    return b;
}

int main() {
    int m1, d1, m2, d2, i = 0, c = 0;
    string a;
    cin >> m1 >> d1 >> m2 >> d2 >> a;
    d1 = f(m2, d2) - f(m1, d1);
    while(y[i] != a) i++;
    for(; i <= d1; i += 7) c++;
    cout << c;
    return 0;
}