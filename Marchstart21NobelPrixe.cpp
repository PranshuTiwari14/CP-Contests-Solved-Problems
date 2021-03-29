#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,m,k;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            
        }
        
        int x[m]={0};
        for(int j=0;j<n;j++){
            x[a[j]-1]++;
        }
        for( k=0;k<m;k++){
            if(x[k]==0){
                
                break;
            }
        }
        if(k==m){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
