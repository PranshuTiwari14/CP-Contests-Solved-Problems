#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        ll n;
        cin>>n;
        ll a[n],sum=0;
        for(int j=0;j<n;j++){
            cin>>a[j];
            sum+=a[j];
        }
        if(sum%2==0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }

    }
    return 0;
}
