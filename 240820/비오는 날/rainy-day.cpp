#include <iostream>
#include <string>
using namespace std;

class C{
public:
    string a, b, c;
    C(string a = "", string b = "", string c = ""){
        this->a = a; this->b = b; this->c = c;
    }
};

int main() {
    int n, i;
    cin >> n;
    C c[n];
    for(i = 0; i < n; i++){
        cin >> c[i].a >> c[i].b >> c[i].c;
        if(c[i].c == "Rain") break;
    }
    cout << c[i].a << ' ' << c[i].b << ' ' << c[i].c;
    return 0;
}