#include <iostream>
using namespace std;

int main() {
    int n, a, c = 0;
    cin >> n;
    for(int i = 0; i < 100; i++){
        cin >> a;
        if(a == 2) c++;
        if(c == 3) {
            cout << i+1;
            return 0;
        }
    }
    return 0;
}