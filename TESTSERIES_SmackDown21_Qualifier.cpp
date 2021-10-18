#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int r[5];
	    
	    int ind = 0;
	    int eng = 0;
	    for(int i = 0; i < 5; i++) {
	        cin >> r[i];
	        if(r[i] == 1) {
	            ind++;
	        }
	        else if(r[i] == 2) {
	            eng++;
	        }
	    }
	    if(ind > eng) {
	        cout << "INDIA" << endl;
	    }
	    else if(eng > ind){
	        cout << "ENGLAND" << endl;
	    }
	    else {
	        cout << "DRAW" << endl;
	    }
	    
	}
	return 0;
}
