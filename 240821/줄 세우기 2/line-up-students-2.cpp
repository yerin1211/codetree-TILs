#include <iostream>
#include <algorithm>
using namespace std;

class C{
public:
    int a = 0, b = 0, c = 0;
};

bool cmp(const C &a, const C &b){
    return (a.b - b.b ? a.b < b.b : a.c > b.c);
}

int main() {
    int n, i;
    cin >> n;
    C a[n];
    for(i = 0; i < n; i++){
        a[i].a = i + 1;
        cin >> a[i].b >> a[i].c;
    }
    sort(a, a + n, cmp);
    for(i = 0; i < n; i++) cout << a[i].b << ' ' << a[i].c << ' ' << a[i].a << '\n';
    return 0;
}