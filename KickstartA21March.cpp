#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,t=0,h;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<=n/2;i++){
            if(s[i]==s[n-i]){
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
            h=k-t;
        }
        cout<<h+2<<endl;
    }
    return 0;
}
