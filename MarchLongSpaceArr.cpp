#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,d=0,k;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        sort(a,a+n);
        for( k=0;k<n;k++){
            if(a[k]>(k+1)){
               
                break;
            }
            else{
                  d+=k+1-a[k];
            }
        }
        if((k==n)&&((d%2)!=0)){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }

    }
    return 0;
}
