#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    n >= 90 ? cout << "passed" : cout << "need " << 90-n << " more score";
    return 0;
}