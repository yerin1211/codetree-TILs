#include <iostream>
using namespace std;

int main() {
    char a[5][3];
    for(int i = 0; i < 5; i++) for(int j = 0; j < 3; j++) cin >> a[i][j];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++) cout << (char)(a[i][j] - 32) << ' ';
        cout << '\n';
    } 
    return 0;
}