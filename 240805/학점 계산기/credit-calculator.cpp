#include <iostream>
using namespace std;

int main() {
    int n;
    double a, s = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        s += a;
    }
    s /= n;
    cout << fixed;
    cout.precision(1);
    cout << s << '\n';
    if(s >= 4) cout << "Perfect";
    else if(s >= 3) cout << "Good";
    else cout << "Poor";
    return 0;
}