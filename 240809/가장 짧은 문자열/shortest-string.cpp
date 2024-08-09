#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c;
    int aa, bb, cc;
    cin >> a >> b >> c;
    aa = a.length(); bb = b.length(); cc = c.length();
    if(aa <= bb && aa <= cc) cout << (bb > cc ? bb - aa : cc - aa);
    else if(bb <= aa && bb <= cc) cout << (aa > cc ? aa - bb : cc - bb);
    else cout << (aa > bb ? aa - cc : bb - cc);
    return 0;
}