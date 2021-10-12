#include<iostream>
#include<math.h>
using namespace std;

#define ll long long int

int main () {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        int p = log2(n);
        if(n == 1) {
            cout << 1 << endl;
        }
        else if(n & (n-1) == 0){
            int ans = n - pow(2,p-1);
            cout << ans << endl;
        }
        else  {
            int x = n - pow(2,p) + 1;
            int y = pow(2,p-1) ;
            
            cout << max(x,y) << endl;
        }
        
    }
    
    return 0;

} 

