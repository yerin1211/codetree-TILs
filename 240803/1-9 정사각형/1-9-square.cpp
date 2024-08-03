#include <iostream>
using namespace std;

int main() {
    int n, c = 1; 
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << c++;
            if(c > 9) c = 1;
        }
        cout << '\n';
    }
    return 0;
}