#include<iostream>
using namespace std;
#define ll long long int


int main () {
    int t;
    cin >> t;
    while(t--) {

    
        ll x, k;
        cin >> x >> k;
        ll maxLCM = (x*k)*((x*k) - 1);
        ll minLCM = x*2;
        cout << minLCM << " " << maxLCM << "\n";
    }
    return 0;
}