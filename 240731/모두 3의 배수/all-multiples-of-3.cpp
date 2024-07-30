#include <iostream>
using namespace std;

int main() {
    int a, i = 5;
    while(i--){
        cin >> a;
        if(a % 3) break;
    }
    cout << !!i;
    return 0;
}