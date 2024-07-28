#include <iostream>
using namespace std;

int main() {
    int n, c = 0; cin >> n;
    do { 
        if(!(n % 4) && (n % 100) || !(n % 400)) c++;
    } while(--n);
    cout << c;
    return 0;
}