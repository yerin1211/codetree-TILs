#include <iostream>
#include <string>
using namespace std;

int main() {
    string a[] = { "apple", "banana", "grape", "blueberry", "orange" };
    char c; int b = 0;
    cin >> c;
    for(int i = 0; i < 5; i++){
        if(a[i][2] == c || a[i][3] == c){
            cout << a[i] << '\n';
            b++;
        }
    }
    cout << b;
    return 0;
}