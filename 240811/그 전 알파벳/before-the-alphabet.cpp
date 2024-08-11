#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    cout << (a == 'a' ? 'z' : (char)(a-1));
    return 0;
}