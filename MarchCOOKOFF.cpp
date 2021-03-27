#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        float w1,w2,x1,x2,M,max,min,y;
        cin>>w1>>w2>>x1>>x2>>M;
        max=(x2)*M;
        min=(x1)*M;
        y=(w2)-(w1);
        if((y>=min) && (y<=max)){
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
    return 0;
}
