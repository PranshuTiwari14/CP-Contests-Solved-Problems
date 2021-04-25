#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        ll n,m,x,y,c,p,k;
        cin>>n>>m;
        cin>>x>>y;
        char result[m];
        for(ll j=0;j<n;j++){
            c=0,p=0;
            for( k=0;k<m;k++){
              cin>>result[k];
              if(result[k]=='F'){
                 c++;
                }
              else if(result[k]=='P'){
                  p++;
                }
            }
            if((c>=x)  || ((c==x-1) && (p>=y))){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
    return 0;
}