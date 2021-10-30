#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n+1] , b[2001] = {0};
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            b[a[i]] ++;
        }

        for(int i = 1; i <= n; i++) {
            a[i] = b[a[i]];
        }
        
        int q;
        cin >> q;
        for(int i =1; i <= q; i++) {
            int x, k;
            cin >> x >> q;


        }
    }
    return 0;
}