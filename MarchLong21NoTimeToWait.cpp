#include<iostream>
using namespace std;

int  main(){
    int n,h,x,i;
    cin>>n>>h>>x;
    int t;
    for( i=0;i<n;i++){
        cin>>t;
        if(x+t==h){
            break;
        }
    }
    if(i==n){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
   
    return 0;
}
