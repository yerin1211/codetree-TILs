#include <iostream>
#include <string>
using namespace std;

class C{
    public:
        string a, b;
        int c;

        C(string a = "", string b = "", int c = -1){
            this->a = a;
            this->b = b;
            this->c = c;
        }

};

int main() {
    C cc = C();
    cin >> cc.a >> cc.b >> cc.c;
    cout << "secret code : " << cc.a << "\nmeeting point : " << cc.b << "\ntime : " << cc.c;
    return 0;
}