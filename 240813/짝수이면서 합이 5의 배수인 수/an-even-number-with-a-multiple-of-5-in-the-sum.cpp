#include <iostream>
using namespace std;

bool f(int n){
    return !(n % 2 || (n / 10 + n % 10) % 5);
}

int main() {
    int n;
    cin >> n;
    cout << (f(n) ? "Yes" : "No");
    return 0;
}