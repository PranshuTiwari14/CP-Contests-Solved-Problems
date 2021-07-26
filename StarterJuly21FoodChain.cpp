#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        float e,k;
        cin>>e>>k;
        int count=1;
        float temp=e/k;
        while(floor(temp)!=0){
            count++;
            temp=temp/k;
        }
        cout<<count<<"\n";
    }
    return 0;
}