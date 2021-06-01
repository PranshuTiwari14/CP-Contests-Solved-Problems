#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        ll n,k,c1=0,c2=0,sum=0;
        cin>>n>>k;
        ll a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
            sum+=a[j];
        }
        sort(a,a+n,greater<int>());
        int b=0,c=0,d=1,e=0;
       while(b<k){
           c1+=a[c];
           c+=2;
           b++;
       }
       while(e<k){
           c2+=a[d];
           d+=2;
           e++;
       }
       c2=c2+a[2*k];
        
        ll ans=max(c1,c2);
        cout<<ans<<"\n";

    }
    return 0;
}