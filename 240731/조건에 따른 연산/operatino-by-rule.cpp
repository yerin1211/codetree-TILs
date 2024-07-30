#include <iostream>
using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    while(n < 1000){
        if(n % 2) n = n * 2 + 2;
        else n = n * 3 + 1;
        c++;
    }
    cout << c;
    return 0;
}