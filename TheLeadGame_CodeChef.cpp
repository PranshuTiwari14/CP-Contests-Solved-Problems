#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int maxLead=0;
    int winner=1;
    int cs1=0,cs2=0;

    while(n--){
        int s1,s2;
        cin>>s1>>s2;
        cs1+=s1;
        cs2+=s2;
        int curWinner=1;
        int curLead=0;
        if(cs1>=cs2){
            curLead=cs1-cs2;
        }
        else{
            curWinner=2;
            curLead=cs2-cs1;
        }
        if(curLead>maxLead){
            maxLead=curLead;
            winner=curWinner;
        }
    }
    cout<<winner<<" "<<maxLead;

    return 0;

}