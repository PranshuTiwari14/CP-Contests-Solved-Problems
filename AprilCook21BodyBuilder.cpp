#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        int n,r;
        cin>>n>>r;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        int b[n];
        for(int k=0;k<n;k++){
            cin>>b[k];
        }
        ll sum=b[0],m=b[0],sum1=0;
        for(int y=1;y<n;y++){
            sum=max(sum1,sum-r*(a[y]-a[y-1]));
            sum+=b[y];
            m=max(m,sum);    
        }
        cout<<m<<endl;
    }
    return 0;
}