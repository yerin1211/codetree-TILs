#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class C{
public:
    int a, b, c;
    C(int a = 0, int b = 0, int c = 0){
        this->a = a; this->b = b; this->c = c;
    }
};

bool cmp(const C &a, const C &b){
    if(a.b - b.b) return a.b > b.b;
    if(a.c - b.c) return a.c > b.c;
    return a.a < b.a;
}

int main() {
    int n;
    cin >> n;
    C a[n];
    for(int i = 0; i < n; i++){
        a[i].a = i+1;
        cin >> a[i].b >> a[i].c;
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++) cout << a[i].b << ' ' << a[i].c << ' ' << a[i].a << '\n';
    return 0;
}