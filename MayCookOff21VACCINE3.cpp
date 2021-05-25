#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t,G,P,x[10],sum,min,max;
    cin>>t;
    for(ll i=1;i<=t;i++){
        sum=0;
        cin>>G>>P>>x[0]>>x[1]>>x[2]>>x[3]>>x[4]>>x[5]>>x[6]>>x[7]>>x[8]>>x[9];
        for(int j=G;j<10;j++){
            sum+=x[j];
        }
        min = (sum+1)/P + ((sum+1)%P !=0);
        max=(sum+x[G-1])/P + ((sum+x[G-1])%P !=0);
        cout<<min<<" "<<max<<endl;
        
    }
    return 0;
}