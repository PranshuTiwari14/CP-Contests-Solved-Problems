#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        ll x,y,x1,y1,D;
        cin>>x>>y>>x1>>y1>>D;
        if((x/x1)>=D && (y/y1)>=D){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}