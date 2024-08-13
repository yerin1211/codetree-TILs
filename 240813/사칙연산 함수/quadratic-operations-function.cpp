#include <iostream>
using namespace std;

int aa(int a, int c){ return a + c; }
int ss(int a, int c){ return a - c; }
int mm(int a, int c){ return a * c; }
int dd(int a, int c){ return a / c; }

int main() {
    int a, c;
    char o;
    cin >> a >> o >> c;
    if(o == '+') cout << a << " + " << c << " = " << aa(a, c);
    else if(o == '-') cout << a << " - " << c << " = " << ss(a, c);
    else if(o == '*') cout << a << " * " << c << " = " << mm(a, c);
    else if(o == '/') cout << a << " / " << c << " = " << dd(a, c);
    else cout << "False";
    return 0;
}