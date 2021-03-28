#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,x,s,r,ans=0;
        cin>>n>>x;
        for(int j=0;j<n;j++){
              cin>>s>>r;
              if((s<=x)&&(r>ans)){
                  ans=r;
                }

        }
        cout<<ans<<endl;
    }
    return 0;
}