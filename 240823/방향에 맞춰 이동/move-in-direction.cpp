#include <iostream>
using namespace std;

int dx[] = {-1, 0, 0, 1}, dy[] = {0, -1, 1, 0};

int main() {
    int n, x = 0, y = 0, b, d;
    char a;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(a == 'W') d = 0;
        else if(a == 'S') d = 1;
        else if(a == 'N') d = 2;
        else d = 3;
        x += dx[d]*b, y += dy[d]*b;
    }
    cout << x << ' ' << y;
    return 0;
}