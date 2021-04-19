#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        int a,b,c,A,B,C,t;
        cin>>a>>b>>c>>t>>A>>B>>C;
        if((A>=a) && (B>=b) && (C>=c) &&(t<=A+B+C)){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}