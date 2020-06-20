#include <bits/stdc++.h>
using namespace std;

const int me = 10025;

int t, x, y;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> t;
    while(t --){
        cin >> x >> y;
        if(x == y || x == y + 2)
            cout << x + y - (x & 1) << endl;
        else cout << "No Number" << endl;
    }
    
    return 0;
}

