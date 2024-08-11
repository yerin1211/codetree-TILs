#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string a;
    cin >> a;
    for(int i = 0; a[i] != '\0'; i++){
        if(isalpha(a[i]) || isdigit(a[i])) cout << (char)tolower(a[i]);
    }
    return 0;
}