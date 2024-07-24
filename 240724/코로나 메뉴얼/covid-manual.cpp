#include <iostream>
using namespace std;

int main() {
    char a;
    int b, c = 0;
    for(int i = 0; i < 3; i++){
        cin >> a >> b;
        if(a == 'Y' && b >= 37) c++;
    }
    cout << (c > 1 ? "E" : "N");
    return 0;
}