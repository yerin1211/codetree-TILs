#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class C{
public:
    string a;
    int b;
    double c;
    C(string a = "", int b = 0, double c = 0){
        this->a = a; this->b = b; this->c = c;
    }
};

bool cmp1(const C &a, const C &b){
    return a.a < b.a;
}

bool cmp2(const C &a, const C &b){
    return a.b > b.b;
}

int main() {
    C a[5];
    for(int i = 0; i < 5; i++) cin >> a[i].a >> a[i].b >> a[i].c;
    cout << fixed;
    cout.precision(1);

    sort(a, a + 5, cmp1);
    cout << "name\n";
    for(int i = 0; i < 5; i++) cout << a[i].a << ' ' << a[i].b << ' ' << a[i].c << '\n';

    sort(a, a + 5, cmp2);
    cout << "\nheight\n";
    for(int i = 0; i < 5; i++) cout << a[i].a << ' ' << a[i].b << ' ' << a[i].c << '\n';
    return 0;
}