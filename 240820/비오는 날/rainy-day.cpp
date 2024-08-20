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
    int n, i, j = -1;
    cin >> n;
    C c[n];
    for(i = 1; i < n; i++){
        cin >> c[i].a >> c[i].b >> c[i].c;
        if(c[i].c == "Rain" && (j < 0 || c[i].a < c[j].a)) j = i;
    }
    cout << c[j].a << ' ' << c[j].b << ' ' << c[j].c;
    return 0;
}