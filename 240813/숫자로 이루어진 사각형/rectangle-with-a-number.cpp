#include <iostream>
using namespace std;

void f(int n){
    int c = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cout << c++ % 9 + 1 << ' ';
        cout << '\n';
    }
}

int main() {
    int n;
    cin >> n;
    f(n);
    return 0;
}