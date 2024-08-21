#include <iostream>
#include <algorithm>
using namespace std;

class C{
public:
    int a, b, c;
    C(int a = 0, int b = 0, int c = 0){
        this->a = a; this->b = b;
    }
};

bool cmp1(const C &a, const C &b){
    return (a.b - b.b ? a.b < b.b : a.a < b.a);
}

bool cmp2(const C &a, const C &b){
    return a.a < b.a;
}

int main() {
    int n, i;
    cin >> n;
    C a[n];
    for(i = 0; i < n; i++){
        a[i].a = i + 1;
        cin >> a[i].b;
    }
    sort(a, a + n, cmp1);
    for(i = 0; i < n; i++) a[i].c = i + 1;
    sort(a, a + n, cmp2);
    for(i = 0; i < n; i++) cout << a[i].c << ' ';

    return 0;
}