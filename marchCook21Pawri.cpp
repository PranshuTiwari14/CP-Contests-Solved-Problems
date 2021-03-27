#include<iostream>
#include<string.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){

        string s;
        cin>>s;
        for(int j=0;j+4<s.length();j++){
            if(s.substr(j,5)=="party"){
                s[j+2]='w';
                s[j+3]='r';
                s[j+4]='i';
            }
        }
        cout<<s<<endl;
        
    }
    return 0;
}