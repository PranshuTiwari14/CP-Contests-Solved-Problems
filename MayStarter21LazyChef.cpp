#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int x,m,d;
        cin>>x>>m>>d;
        int ans=min(x*m,x+d);
        cout<<ans<<"\n";
    }
    return 0;
}