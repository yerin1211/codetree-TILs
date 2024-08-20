#include <iostream>
#include <string>
using namespace std;

class C{
public:
    string a;
    int b;

    C(string a = "", int b = 0){
        this->a = a;
        this->b = b;
    }
};

int main() {
    C c[5]; int m = 0;
    for(int i = 0; i < 5; i++){
        cin >> c[i].a >> c[i].b;
        m = (c[i].b < c[m].b ? i : m);
    }
    cout << c[m].a << ' ' << c[m].b;
    return 0;
}