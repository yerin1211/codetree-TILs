#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class C{
public:
    string d;
    int a, b, c;
    C(string d = "", int a = 0, int b = 0, int c = 0){
        this->a - a; this->b = b; this->c = c; this->d = d;
    }
};

bool cmp(const C &a, const C &b){
    return a.a + a.b + a.c < b.a + b.b + b.c;
}

int main() {
    int n, i;
    cin >> n;
    C a[n];
    for(i = 0; i < n; i++) cin >> a[i].d >> a[i].a >> a[i].b >> a[i].c;
    sort(a, a + n, cmp);
    for(i = 0; i < n; i++) cout << a[i].d << ' ' << a[i].a << ' ' << a[i].b << ' ' << a[i].c << '\n';
    return 0;
}