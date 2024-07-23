#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (n % 2 && !(n % 3) || !(n % 2 || n % 5) ? "true" : "false");
    return 0;
}