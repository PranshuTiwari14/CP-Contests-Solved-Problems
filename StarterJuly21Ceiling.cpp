#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        double a,b;
        cin>>a>>b;
        int ans;
            if(a==b){
                ans=0;
            }
            else if(a>b){
                ans=ceil(((b-(a+1))/2)) +ceil((((a+1)-a)/2));
            }
            else{
                ans=ceil(((b-(a+1))/2)) + ceil((((a+1)-a)/2));
            }
        
        
    cout<<ans<<endl;
    }
    return 0;
}