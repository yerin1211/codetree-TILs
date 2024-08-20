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
    C c1 = C("codetree", 10), c2 = C();
    cin >> c2.a >> c2.b;
    cout << "user " << c1.a << " lv " << c1.b << "\nuser " << c2.a << " lv " << c2.b;
    return 0;
}