#include <bits/stdc++.h>
using namespace std;

const int me = 1000025;

int t, n;

int main() {
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    
    scanf("%d", &t);
    while(t --){
        scanf("%d", &n);
        printf(n % 2 == 0 ? "Thankyou" : "Sorry");
        printf(" Shaktiman\n");
    }
    
    return 0;
}
