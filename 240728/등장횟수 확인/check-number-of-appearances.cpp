#include <iostream>
using namespace std;

int main() {
    int a, c = 0, i = 5;
    while(i--){
        cin >> a;
        if(!(a % 2)) c++;
    }
    cout << c;
    return 0;
}