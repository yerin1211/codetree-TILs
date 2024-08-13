#include <iostream>
using namespace std;

int f(int a, int b, int c){
    return (a > b ? (b > c ? c : b) : (a > c ? c : a));
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << f(a, b, c);
    return 0;
}