#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, s = "";
    cin >> a;
    char b = a[0]; int c = 1;
    for(int i = 1; a[i] != '\0'; i++){
        if(a[i] == b) c++;
        else{
            s += b + to_string(c);
            c = 1;
            b = a[i];
        }
    }
    s += b + to_string(c);
    cout << s.length() << '\n' << s;
    return 0;
}