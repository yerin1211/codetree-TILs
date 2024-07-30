#include <iostream>
using namespace std;

int main() {
    int a;
    while(1){
        cin >> a;
        if(a == 1) cout << "John\n";
        else if(a == 2) cout << "Tom\n";
        else if(a == 3) cout << "Paul\n";
        else if(a == 4) cout << "Sam\n";
        else break;
    }
    cout << "Vacancy";
    return 0;
}