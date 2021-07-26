#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int a,b;
        cin>>a>>b;
        if(a+b<3){
            cout<<1<<endl;
        }
        else if (a+b>=3 && a+b<=10){
            cout<<2<<endl;
        }
        else if (a+b>11 && a+b<=60){
            cout<<3<<endl;
        }
        else if(a+b>60){
            cout<<4<<endl;
        }
    }
    return 0;
}