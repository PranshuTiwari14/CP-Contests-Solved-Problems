#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        int n,k;
        cin>>n>>k;
        ll a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        int bits[33];
        for(int j=0;j<33;j++){
            bits[j]=0;

        }
        for(int j=0;j<n;j++){
            ll x=a[j];
            int y=32;
            while(x>0){
                bits[y]=bits[y]+x%2;
                x=x/2;
                y--;
            }
        }
        int sum=0;
        for(int j=0;j<33;j++){
            if(bits[j]%k==0){
                sum=sum+(bits[j]/k);
            }
            else{
                sum=sum+(bits[j]/k)+1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}