#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   
    
        ll a,b,c,x=0;
        cin>>a>>b;
        for(ll i=1;i<=a;i++){
            for(ll j=1;j<=b;j++){
                c=i*i + j;
                ll d=sqrt(c);
                if(d*d==c){
                    x++;
                }
            }
        }
        cout<<x;

    
    return 0;
}