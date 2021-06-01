#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        ll a,b,c,d,K;
        cin>>a>>b>>c>>d>>K;
		ll ans = abs(b - d)+abs(a - c);
		if(ans>K){
            cout<<"NO"<<endl;
        }
        else if(ans==K){
            cout<<"YES"<<endl;
        }
		else if ((K-ans)%2==0) {
            cout<<"YES"<<endl;
        }
        
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}