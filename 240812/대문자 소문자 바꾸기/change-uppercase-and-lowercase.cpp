#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    for(int i = 0; a[i] != '\0'; i++){
        if(a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
        else if(a[i] >= 'a' && a[i] <= 'z') a[i] -= 32;
    }
    cout << a;
    return 0;
}