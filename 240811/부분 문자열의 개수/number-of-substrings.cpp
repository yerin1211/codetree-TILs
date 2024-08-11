#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int i, j, c = 0;
    cin >> a >> b;
    for(i = 0; i <= a.length() - b.length(); i++){
        if(a[i] == b[0]){
            for(j = 0; j < b.length() && i + j < a.length(); j++) if(a[i+j] != b[j]) break;
            if(j == b.length()) c++;
        }
    }
    cout << c;
    return 0;
}