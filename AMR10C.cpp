#include <bits/stdc++.h>
using namespace std;

const int me = 1000025;

int T, N;
int lp[me];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i = 2; i < me; i ++)
        if(!lp[i]){
            for(int j = i; j < me; j += i)
                lp[j] = i;
        }
    cin >> T;
    for(int _ = 0; _ < T; _ ++){
        cin >> N;
        int result = 0;
        while(N > 1){
            int d = lp[N];
            int count = 0;
            while(N % d == 0){
                count ++;
                N /= d;
            }
            result = max(result, count);
        }
        cout << result << endl;
    }

    return 0;
}
