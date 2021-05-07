#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n;
    cin>>n;
    set<pair<string,string>> ans;
    for(ll i=1;i<=n;i++){

        string s,c;
        cin>>s>>c;
        ans.insert(make_pair(s,c));

    }
    cout<<ans.size();
    return 0;
}