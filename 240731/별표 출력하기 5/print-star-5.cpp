#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--){
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= n; j++) cout << '*';
            cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}