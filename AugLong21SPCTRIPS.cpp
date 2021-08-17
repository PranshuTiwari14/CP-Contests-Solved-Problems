#include<bits/stdc++.h>
using namespace std;

int Triplets (int n) {
    
    int sum  = 0;
    for(int c = 1; c <= n; c++) {
        for(int b = c; b <= n; b+=c){
            for(int a = c; a <= n; a=a+b) {
                if((a % b == c) && (b % c == 0)){
                    sum++;
                    
                }
            }
        }
    }
    return sum;
}

int main () {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        cout << Triplets(n) << endl;
        
    }
    return 0;
}