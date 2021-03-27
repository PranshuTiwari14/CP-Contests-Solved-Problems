#include <iostream>
using namespace std;


int main() {
	// your code goes here
	int t,l,r;
	cin>>t;
	for(int i=1;i<=t;i++){
	    cin>>l>>r;
	    int x=0;
	    for(int j=l;j<=r;j++){
	        
	        if(j%10==2||j%10==3||j%10==9){
	            x++;
	        }
	       
	    }
	    cout<<x<<endl;
	}
	return 0;
}
