#include <iostream>
using namespace std;

int main() {
    char a;
    for(int i = 0; i < 10; i++){
        cin >> a;
        if(!((i - 1) % 3)) cout << a << ' ';
    }
    return 0;
}