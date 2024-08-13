#include <iostream>
using namespace std;

int y, m, d;

bool yoon(){ return !(y % 4) && (y % 100 || !(y % 400)); }

bool md(){
    if(m > 12) return 0;
    if(m == 2) return (yoon() ? d <= 29 : d <= 28);
    if(m <= 7 && m % 2 || m >= 8 && !(m % 2)) return d <= 31;
    return d <= 30;
}

void se(){
    if(!md()) cout << -1;
    else if(m == 12 || m <= 2) cout << "Winter";
    else if(m <= 5) cout << "Spring";
    else if(m <= 8) cout << "Summer";
    else cout << "Fall";
}

int main() {
    cin >> y >> m >> d;
    se();
    return 0;
}