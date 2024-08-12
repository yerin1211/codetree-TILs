#include <iostream>
using namespace std;

void f(){
    for(int i = 0; i < 10; i++) cout << '*';
    cout << '\n';
}

int main() {
    for(int i = 0; i < 5; i++) f();
    return 0;
}