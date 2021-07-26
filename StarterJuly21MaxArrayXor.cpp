#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        ll k;
        cin>>n>>k;
        ll ans;
        ll arraySize=(1<<n);
        ans=min(2*k,arraySize)*(arraySize-1);
        cout<<ans<<endl;
    }
    return 0;
}