#include <iostream>
using namespace std;

int main() {
    double a;
    cout << fixed;
    cout.precision(3);
    for(int i = 0; i < 5; i++){
        cin >> a;
        cout << a << '\n';
    }
    return 0;
}