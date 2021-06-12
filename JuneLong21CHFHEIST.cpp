#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t,d,D,p,q,ans,b,a;
    cin>>t;
    for(ll i=1;i<=t;i++){
        ans=0;
        cin>>D>>d>>p>>q;
        b=D/d;
        a=((b-1)*b)/2;
        ans=b*p*d + a*q*d;
        
        ans+=(p+b*q)*(D%d);
        cout<<ans<<"\n";
    }
    return 0;
}