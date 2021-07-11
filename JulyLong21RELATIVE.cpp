#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t,c,g;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>g>>c;
        int h= (c*c)/(2*g);
        cout<<h<<endl;
    }
    return 0;
}