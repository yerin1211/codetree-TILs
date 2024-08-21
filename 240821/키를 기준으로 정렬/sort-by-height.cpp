#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class C{
public:
    string a;
    int b, c;
    C(string a = "", int b = 0, int c = 0){
        this->a = a; this->b = b; this->c = c;
    }
};

bool cmp(const C &aa, const C &bb){
    return aa.b < bb.b;
}

int main() {
    int n;
    cin >> n;
    C cc[n];
    for(int i = 0; i < n; i++) cin >> cc[i].a >> cc[i].b >> cc[i].c;
    sort(cc, cc + n, cmp);
    for(int i = 0; i < n; i++) cout << cc[i].a << ' ' << cc[i].b << ' ' << cc[i].c << '\n';
    return 0;
}