#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        string s;
        int sum=0;
        cin>>s;
        for(int j=0;j<s.size();j++){
            if(s[j]>='0' && s[j]<='9'){
                sum+=s[j] -'0';
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}