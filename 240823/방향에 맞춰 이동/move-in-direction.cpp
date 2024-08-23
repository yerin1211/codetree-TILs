#include <iostream>
using namespace std;

int dx[] = {-1, 0, 0, 1}, dy[] = {0, -1, 1, 0};

int main() {
    int n, x = 0, y = 0, b;
    char a;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(a == 'W') x += dx[0]*b, y += dy[0]*b;
        else if(a == 'S') x += dx[1]*b, y += dy[1]*b;
        else if(a == 'N') x += dx[2]*b, y += dy[2]*b;
        else x += dx[3]*b, y += dy[3]*b;
    }
    cout << x << ' ' << y;
    return 0;
}