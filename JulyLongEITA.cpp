#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t,d,x,y,z;
    cin>>t;
    for(int i=1;i<=t;i++){
        
        cin>>d>>x>>y>>z;
        int work=max(7*x,(y*d+(7-d)*z));
        cout<<work<<endl;
    }
    return 0;
}