#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 19; i++) for(int j = 1; j <= 19; j++) cout << i << " * " << j << " = " << i * j << (j % 2 && j != 19 ? " / " : "\n");
    return 0;
}