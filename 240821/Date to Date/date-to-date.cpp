#include <iostream>
using namespace std;

int a[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

int main() {
    int m1, m2, d1, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    d1 = d2 - d1 + 1;
    for(; m1 < m2; m1++) d1 += a[m1];
    cout << d1;
    return 0;
}