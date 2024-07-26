#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
        cout << ((i%3) && ((i%10)%3 || !(i%10)) && ((i/10)%3 || !(i/10)) ? i : 0) << ' ';
    return 0;
}