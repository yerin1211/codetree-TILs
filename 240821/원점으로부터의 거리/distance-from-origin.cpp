#include <iostream>
#include <algorithm>
using namespace std;

class C{
public:
    int a, b, c;
    C(int a = 0, int b = 0){
        this->a = a; this-> b = b;
    }
};

bool cmp(const C &a, const C &b){
    int c = abs(a.a) + abs(a.b) - abs(b.a) - abs(b.b);
    return c ? c < 0 : a.c < b.c;
}

int main() {
    int n, i;
    cin >> n;
    C a[n];
    for(i = 0; i < n; i++){
        a[i].c = i + 1;
        cin >> a[i].a >> a[i].b;
    }
    sort(a, a + n, cmp);
    for(i = 0; i < n; i++) cout << a[i].c << '\n';
    return 0;
}