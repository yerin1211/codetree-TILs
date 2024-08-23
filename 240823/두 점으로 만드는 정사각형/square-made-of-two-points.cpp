#include <iostream>
using namespace std;

int main() {
    int x1, x2, y1, y2, a1, a2, b1, b2;
    cin >> x1 >> y1 >> x2 >> y2;
    a1 = x1; a2 = x2; b1 = y1; b2 = y2;
    cin >> x1 >> y1 >> x2 >> y2;
    a1 = (a1 < x1 ? a1 : x1);
    a2 = (a2 > x2 ? a2 : x2);
    b1 = (b1 < y1 ? b1 : y1);
    b2 = (b2 > y2 ? b2 : y2);
    cout << (a2-a1 > b2-b1 ? (a2-a1)*(a2-a1) : (b2-b1)*(b2-b1));
    return 0;
}