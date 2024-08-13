#include <iostream>
using namespace std;

bool f(int m, int d){
    if(m > 12) return 0;
    if(m == 2) return d <= 28;
    if(m <= 7 && m % 2 || m >= 8 && !(m % 2)) return d <= 31;
    return d <= 30;
}

int main() {
    int m, d;
    cin >> m >> d;
    cout << (f(m, d) ? "Yes" : "No");
    return 0;
}