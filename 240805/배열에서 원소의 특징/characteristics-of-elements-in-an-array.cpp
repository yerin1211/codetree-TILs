#include <iostream>
using namespace std;

int main() {
    int a[10], i;
    for(i = 0; i < 10; i++){
        cin >> a[i];
        if(!(a[i] % 3)){
            cout << a[i-1];
            return 0;
        } 
    }
    return 0;
}