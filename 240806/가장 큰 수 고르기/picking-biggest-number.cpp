#include <iostream>
using namespace std;

int main() {
    int a, m = 0;
    for(int i = 0; i < 10; i++){
        cin >> a;
        m = (a > m ? a : m);
    }
    cout << m;
    return 0;
}