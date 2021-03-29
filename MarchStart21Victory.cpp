#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int r,o,c;
    cin>>r>>o>>c;
    if((20-o)*6*6>r-c){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
    