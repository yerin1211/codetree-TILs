#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    char b = a[0]; int c = a.length();
    for(int i = 1; a[i] != '\0'; i++){
        if(a[i] == b) c--;
        else{
            b = a[i];
            c++;
        } 
    }
    cout << c + 1 << '\n';
    b = a[0]; c = 1;
    for(int i = 1; a[i] != '\0'; i++){
        if(a[i] == b) c++;
        else{
            cout << b << c;
            c = 1;
            b = a[i];
        }
    }
    cout << b << c;
    return 0;
}