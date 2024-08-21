#include <iostream>
#include <algorithm>
using namespace std;

class C{
public:
    int a, b;
    C(int a = 0, int b = 0){
        this->a = a; this->b = b;
    }
};

bool cmp(const C &a, const C &b){
    return (a.b - b.b ? a.b < b.b : a.a < b.a);
}

int main() {
    int n, i;
    cin >> n;
    C a[n]; int ans[n];
    for(i = 0; i < n; i++){
        a[i].a = i + 1;
        cin >> a[i].b;
    }
    sort(a, a + n, cmp);
    for(i = 0; i < n; i++) ans[a[i].a - 1] = i + 1;
    for(i = 0; i < n; i++) cout << ans[i] << ' ';

    return 0;
}