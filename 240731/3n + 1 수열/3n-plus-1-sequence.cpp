#include <iostream>
using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    while(n != 1){
        if(n % 2) n = n * 3 + 1;
        else n /= 2;
        c++;
    }
    cout << c;
    return 0;
}