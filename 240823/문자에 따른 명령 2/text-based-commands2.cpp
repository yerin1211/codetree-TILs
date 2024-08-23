#include <iostream>
#include <string>
using namespace std;

int dx[] = {1, 0, -1, 0}, dy[] = {0, -1, 0, 1};

int main() {
    string a;
    int x = 0, y = 0, d = 3;
    cin >> a;
    for(int i = 0; a[i] != 0; i++){
        if(a[i] == 'F') x += dx[d], y += dy[d];
        else if(a[i] == 'L') d = (d + 3) % 4;
        else d = (d + 1) % 4;
    }
    cout << x << ' ' << y;
    return 0;
}