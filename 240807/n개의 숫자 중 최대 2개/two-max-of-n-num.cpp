#include <iostream>
using namespace std;

int main() {
    int n, a, m1, m2;
    cin >> n;
    cin >> m1 >> m2;
    if(m1 < m2){
        a = m1;
        m1 = m2;
        m2 = a;
    }
    for(int i = 2; i < n; i++){
        cin >> a;
        if(a > m1){
            m2 = m1;
            m1 = a;
        }
        else if(a > m2) m2 = a;
    }
    cout << m1 << ' ' << m2;
    return 0;
}