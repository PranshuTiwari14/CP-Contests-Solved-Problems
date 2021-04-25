#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        ll n,m,x,y,a,b;
        cin>>n>>m;
        cin>>x>>y;
        cin>>a>>b;
        ll t = n-x + m-y;
        ll p = n-a + m-b - min(n-a,m-b);
        if(t<=p){
            cout<<"YES"<<endl;
        }
        else if (t>p){
            cout<<"NO"<<endl;
        }

    }
    return 0;
}