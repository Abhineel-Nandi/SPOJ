#include <bits/stdc++.h>

using namespace std;

const int MAX = 11000005;
const int NEED = 2000000;

int N = 0;
int p[MAX], values[NEED + 1];

int main() {
    for (int i = 2; i * i < MAX; i ++) {
        if (p[i]) continue;
        for (int j = i * i; j < MAX; j += i) p[j] = i;
    }
    p[1] = 1;
    for (int i = 2; i < MAX && N < NEED; i ++) {
        if (p[i] && p[i] != i / p[i] && !p[p[i]] && !p[i / p[i]]) {
            values[N ++] = i;
        }
    }
    
    int t, n;
    cin >> t;
    while (t --) {
        cin >> n;
        cout << values[n - 1] << endl;
    }
    
    return 0;
}
