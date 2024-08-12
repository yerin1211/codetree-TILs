#include <iostream>
using namespace std;

void f(int n){
    while(n--) cout << "12345^&*()_\n";
}

int main() {
    int n;
    cin >> n;
    f(n);
    return 0;
}