#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    for(int i=1;i<=t;i++){
        ll n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int j=0;j<n;j++){
           cin>>a[j];
        }
        unordered_map<int,int>map;
        for(int k=0;k<n;k++){
           map[a[k]]+=1;
        }
        int var = 0;
        for(auto it = map.begin();it!=map.end();it++){
            var += it->second-1;
        }
        if(var<x){
            cout<<map.size()-x+var<<endl;
        }
        else{
            cout<<map.size()<<endl;
        }
    }
    return 0;
}

