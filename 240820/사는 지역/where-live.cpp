#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class C{
public:
    string a, b, c;
    C(string a = "", string b = "", string c = ""){
        this->a = a; this->b = b; this->c = c;
    }
};

bool cmp(C c1, C c2){
    return c1.a > c2.a;
}

int main() {
    int n;
    cin >> n;
    C c[n];
    for(int i = 0; i < n; i++) cin >> c[i].a >> c[i].b >> c[i].c;
    sort(c, c + n, cmp);
    cout << "name " << c[0].a << "\naddr " << c[0].b << "\ncity " << c[0].c;
    return 0;
}