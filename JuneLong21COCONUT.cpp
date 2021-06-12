#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t,x,y,X,Y,ans;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y>>X>>Y;
        ans=X/x + Y/y;
        cout<<ans<<"\n";

    }
    return 0;
}