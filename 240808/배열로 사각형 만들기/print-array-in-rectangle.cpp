#include <iostream>
using namespace std;

int main() {
    int a[5][5], i, j;
    for(i = 0; i < 5; i++) for(j = 0; j < 5; j++) a[i][j] = (i && j ? a[i-1][j] + a[i][j-1] : 1);
    for(i = 0; i < 5; i++) for(j = 0; j < 5; j++) cout << a[i][j] << (j - 4 ? ' ' : '\n');
    return 0;
}