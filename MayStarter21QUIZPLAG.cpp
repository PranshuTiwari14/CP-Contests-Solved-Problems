#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t,n,m,k;
    
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>m>>k;
        int a[k];
        vector<int> c;
        int count=0,p=0;
        for(int j=0;j<k;j++){
            cin>>a[j];
            if(p<=a[j]){
                p=a[j];
            }
        }
       
        int b[p+1]={0};
        for(int x=0;x<k;x++){
            b[a[x]]++;
        }
        for(int y=0;y<p+1;y++){
            if(b[y]>1 && !(y>=n+1 && y<=n+m)){
                c.push_back(y);
                count++;
            }
        }
        sort(c.begin(),c.end());
        cout<<count<<" ";
        for(int z=0;z<c.size();z++){
            cout<<c[z]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}