#include <iostream>
#include <cmath>

using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    long long a, b;
    
    cin >> T;
    while (T --) {
        cin >> a >> b;
        a = b - a;
        if (a == 0) {
            cout << 1 << endl;
        } else {
            int bits = 63 - __builtin_clzll(a);
            cout << min(a - (1LL << bits) + 1, (1LL << (bits + 1)) - a - 1) << endl;
        }
    }
    
    return 0;
}

