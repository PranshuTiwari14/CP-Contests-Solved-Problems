#include<bits/stdc++.h>
using namespace std;
#define ll long long int

float round1(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}
int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        float k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        float ans=100/(k1*k2*k3*v);
        float a=9.58;
        if(round1(ans)<a){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        

    }
    return 0;
}