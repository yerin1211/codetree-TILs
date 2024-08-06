#include <iostream>
using namespace std;

int main() {
    int a, c[7] = {};
    for(int i = 0; i < 10; i++){
        cin >> a;
        c[a]++;
    }
    for(int i = 1; i <= 6; i++) cout << i << " - " << c[i] << '\n'; 
    return 0;
}