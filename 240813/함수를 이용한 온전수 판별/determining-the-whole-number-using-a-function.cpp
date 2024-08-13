#include <iostream>
using namespace std;

bool f(int a){
    return a % 2 && a % 10 != 5 && (a % 3 || !(a % 9));
}

int main() {
    int a, b, c = 0;
    cin >> a >> b;
    for(; a <= b; a++) if(f(a)) c++;
    cout << c;
    return 0;
}