#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int D,d,A,B,C;
        cin>>D>>d>>A>>B>>C;
        int ans;
        ans=D*d;
        if(ans>=10 && ans<=20){
            cout<<A<<endl;
        }
        else if(ans>=21 && ans<=41){
            cout<<B<<endl;
        }
        else if(ans>=42){
            cout<<C<<endl;
        }
        else {
            cout<<0<<endl;
        }
    }
    return 0;
}