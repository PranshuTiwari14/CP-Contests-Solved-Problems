#include<iostream>
#include<string>
using namespace std;

int  main(){
    int t;
    cin>>t;
    string s;
    for(int i=1;i<=t;i++){
       cin>>s;
       int count=0;
        for(int j=0;j<s.length();j++){
            if(s[j]=='1'){
                count++;
            }
        } 
        for(int x=0;x<s.length();x++){   
            if(s[x]=='1'&&s[x+1]=='1'){
                count--;
            }
           
        }
        cout<<count<<endl;
        
    }
    return 0;
}