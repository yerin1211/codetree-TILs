#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    for(int i = 0; i < 4; i++){
        cin >> b;
        cout << (a > b) << '\n';
    }
    return 0;
}