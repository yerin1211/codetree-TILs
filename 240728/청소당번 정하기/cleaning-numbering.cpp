#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 0, c = 0; cin >> n;
    while(n){
        if(!(n % 12)) c++;
        else if(!(n % 3)) b++;
        else if(!(n % 2)) a++;
        n--;
    }
    cout << a << ' ' << b << ' ' << c;
    return 0;
}