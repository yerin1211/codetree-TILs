#include <iostream>
#include <string>
using namespace std;

class C{
public:
    string a;
    char b;
    int c;
    C(string a = "", char b = '\0', int c = 0){
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int main() {
    C c = C();
    cin >> c.a >> c.b >> c.c;
    cout << "code : " << c.a << "\ncolor : " << c.b << "\nsecond : " << c.c;
    return 0;
}