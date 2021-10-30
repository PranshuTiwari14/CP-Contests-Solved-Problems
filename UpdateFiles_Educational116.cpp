#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main () {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        if(n == 1) {
            cout << 0 << endl;
            continue;
        }
        ll sum  = 2;
        ll time ;
        

        int pos = ceil(log2(k));
        time = pos;
        ll rem = n - pow(2,pos);
        if(rem <= 0) {
            cout << time  << endl;
        }
        else{
            time += ceil((rem *1.0)/k);
            cout << time << endl;
        }
        
    }
    return 0;
}