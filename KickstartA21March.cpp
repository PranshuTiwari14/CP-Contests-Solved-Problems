#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(j=1;j<=t;j++){
        int n,k,t=0,h;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<=n/2;i++){
            if(s[i]==s[n-i-1]){
               continue;
            }
            else{
                t++;
            }
        }
        if(t==k){
            h=0;
        }
        else{
            h=abs(k-t);
        }
        cout<<"Case #"<<j<<": "<<h<<endl;
    }
    return 0;
}
