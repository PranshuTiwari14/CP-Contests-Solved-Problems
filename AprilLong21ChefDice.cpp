#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        ll n,ans;
        cin>>n;
        if(n==1){
            ans=20;
        }
        else if(n==2){
            ans=36;
        }
        else if(n==3){
            ans=51;
        }
        else if(n==4){
            ans=60;
        }
        if((n%4==0)  && (n!=4)){
           ans=(n/4)*44 + 4*4;
        }
        else if((n%4==1) && (n!=1)){
            ans=(n/4)*44 + (3*4) + 20;
        }
        else if((n%4==2) && (n!=2)){
            ans=(n/4)*44 + (2*4) + 18*2;
        }
        else if((n%4==3) && (n!=3)){
            ans=(n/4)*44 + (1*4) + 2*18 + 15;
        }
        cout<<ans<<endl;
    }
    return 0;
}