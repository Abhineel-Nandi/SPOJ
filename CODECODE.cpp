#include <bits/stdc++.h>
using namespace std;

int T;
double x, y;

int main() {
    cin >> T;
    while (T --) {
        cin >> x >> y;
        cout.precision(2);
        cout << fixed << (x * y + (100. - x) * (100. - y)) / 100. << "%" << endl;
    }
    
    return 0;
}

