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
    int n, j = 0;
    cin >> n;
    C c[n];
    for(int i = 0; i < n; i++){
        cin >> c[i].a >> c[i].b >> c[i].c;
        if(c[i].a > c[j].a) j = i;
    }
    cout << "name " << c[j].a << "\naddr " << c[j].b << "\ncity " << c[j].c;
    return 0;
}