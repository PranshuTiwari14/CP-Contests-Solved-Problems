#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int u,v,a,s;
      
        cin>>u>>v>>a>>s;
        
        if(v>=u){
            cout<<"Yes"<<endl;
        }
        else {
          
          if(2*a*s>=(u*u-v*v)){
              cout<<"Yes"<<endl;  
            }
          else {
              cout<<"No"<<endl;
            }
        }
       
    }
    return 0;
}