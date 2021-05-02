#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    
    float a,b,c,d;
    int i;
    cin>>a>>b>>c>>d;
    float r[4]={a,b,c,d};
    for( i=1;i<=24;i++){
        if((r[0]/r[1])==(r[2]/r[3])){
            cout<<"Possible";
            break;
        }
        else{
            next_permutation(r,r+4);
        }
    }
    if(i==25){
        cout<<"Impossible";
    }
   
    return 0;
}