#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll sum1=0,sum3=0;
    ll initial=0;
    ll last=n-1;
    ll max=0;

    while(initial<=last){
        if(sum1<sum3){
            sum1+=a[initial++];
        }
        else if(sum1>sum3){
            sum3+=a[last--];
        }
        else{
             max=sum1;
             sum1+=a[initial++];
        }
    }
    if(sum1==sum3){
        max=sum1;
    }
    cout<<max;
    return 0;
}