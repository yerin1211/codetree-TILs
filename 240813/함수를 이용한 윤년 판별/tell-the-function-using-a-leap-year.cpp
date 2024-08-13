#include <iostream>
using namespace std;

bool f(int y){
    if(y % 4) return 0;
    if(!(y % 100) && y % 400) return 0;
    return 1;
}

int main() {
    int y;
    cin >> y;
    cout << (f(y) ? "true" : "false");
    return 0;
}