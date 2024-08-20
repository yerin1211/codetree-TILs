#include <iostream>
#include <string>
using namespace std;

class C{
public:
    string a, b;
    C(string a = "", string b = ""){
        this->a = a;
        this->b = b;
    }
};

int main() {
    C c1 = C("codetree", "50"), c2;
    cin >> c2.a >> c2.b;
    cout << "product " << c1.b << " is " << c1.a << "\nproduct " << c2.b << " is " << c2.a;
    return 0;
}