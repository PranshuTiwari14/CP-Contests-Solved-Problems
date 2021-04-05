#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        int n,k,j,x=0,max=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for( j=0;j<n;j++){
            if(s[j]=='*'){
                x++;
                if(x==k){
                    cout<<"YES"<<endl;
                    max++;
                    break;
                }
            }
            else{
                
                x=0;
            }
        }
        if(max==0){
            cout<<"NO"<<endl;
        }

    }
    return 0;
}