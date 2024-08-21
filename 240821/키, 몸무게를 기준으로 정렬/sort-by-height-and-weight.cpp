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

bool cmp(const C &a, const C &b){
    return (a.b - b.b ? a.b < b.b : a.c > b.c);
}

int main() {
    int n, i;
    cin >> n;
    C a[n];
    for(i = 0; i < n; i++) cin >> a[i].a >> a[i].b >> a[i].c;
    sort(a, a + n, cmp);
    for(i = 0; i < n; i++) cout << a[i].a << ' ' << a[i].b << ' ' << a[i].c << '\n';
    return 0;
}