#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;
    for(int i = 2; i < n; i++){
        if(!(n % i)){
            cout << 'C';
            return 0;
        }
    } 
    cout << 'N';
    return 0;
}