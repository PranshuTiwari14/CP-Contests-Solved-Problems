#include<iostream>
using namespace std;
#define ll long long int


int main () {
    int t;
    cin >> t;
    while(t--) {
        ll n,k,ans;
        
        cin >> n >> k;
        
        ans = (2 * (n-k)) + (2 * ((k-1)/2));

        cout << ans << endl;
    }
    return 0;
}