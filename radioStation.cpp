#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,m;
    cin>>n>>m;
    map<string,string>mp;
    string name,server,task;
    for(int i=1;i<=n;i++){
        cin>>name>>server;
        mp[server+";"]=name;

    }
    for(int i=1;i<=m;i++){
        cin>>name>>task;
        cout<<name<<" "<<task<<" #"<<mp[task]<<endl;
    }
    return 0;
}