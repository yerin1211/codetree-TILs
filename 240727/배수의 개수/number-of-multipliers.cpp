#include <iostream>
using namespace std;

int main() {
    int a, b = 0, c = 0;
    for(int i = 0; i < 10; i++){
        cin >> a;
        if(!(a % 3)) b++;
        if(!(a % 5)) c++;
    }
    cout << b << ' ' << c;
    return 0;
}