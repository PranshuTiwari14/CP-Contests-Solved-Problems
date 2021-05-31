#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t,k;

    cin>>t;
    for(ll i=1;i<=t;i++){
        int count=0;
        cin>>k;
        string a;
        for(ll j=0;j<k;j++){
            cin>>a;
            
            int count1=0,count2=0;
            for(ll k=0;k<a.size();k++){
                if(a[k]>='a' && a[k]<='m'){
                    count1++;
                }
                else if(a[k]>='N' && a[k]<='Z'){
                    count2++;
                }
            }
            if(count1==a.size() || count2==a.size()){
                
                count++;
            }

        }
        if(count==k){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }

    }
    return 0;
}