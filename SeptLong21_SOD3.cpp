#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        ll L,R;
        cin >> L >> R;
        ll x = R/3;
        ll y = L/3;
        if(L%3 == 0 && R%3 != 0 ) {
            cout << x-y+1 << endl;
        }
        else if(L%3 == 0 && R%3 == 0) {
            cout << x-y+1 << endl;
        }
        else{
            cout << x-y << endl;
        } 
        
    }
    return 0;
}