#include <iostream>
using namespace std;

int main() {
    int a;
    while(1){
        cin >> a;
        if(a < 25) cout << "Higher\n";
        else if(a > 25) cout << "Lower\n";
        else break;
    }
    cout << "Good";
    return 0;
}