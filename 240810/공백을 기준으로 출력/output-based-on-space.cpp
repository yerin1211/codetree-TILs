#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    for(int i = 0; i < a.length(); i++){
        if(a[i] == ' ') continue;
        cout << a[i];
    }
    getline(cin, a);
    for(int i = 0; i < a.length(); i++){
        if(a[i] == ' ') continue;
        cout << a[i];
    }
    return 0;
}