#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main () {
    int t;
    cin >> t;
    while(t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        ll sum  = a + (2*b) + (3*c);
        
        if(sum%2 == 0) {
            cout << 0 << "\n";
        }
        else{
            cout << 1 << "\n";
        }

    }
    return 0;
}