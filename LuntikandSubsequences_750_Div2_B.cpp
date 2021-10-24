#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main () {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        ll a[n];
        ll sum = 0;
        int count = 0,zero_count = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if(a[i] == 1) {
                count++;
            }
            if(a[i] == 0) {
                zero_count++;
            }
        } 
        ll ans =      (count * (pow(2,zero_count))) ;
        
        cout << ans << endl;
    }
    return 0;
}