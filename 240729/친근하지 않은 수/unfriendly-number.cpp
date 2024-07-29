#include <iostream>
using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    for(; n >= 1; n--) if(n % 2 && n % 3 && n % 5) c++;
    cout << c;
    return 0;
}