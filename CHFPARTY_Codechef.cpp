#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        ll n;
        cin>>n;
        ll a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        sort(a,a+n);
        ll x=0;
        for(int j=0;j<n;j++){
            if(x>=a[j]){
                x++;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}