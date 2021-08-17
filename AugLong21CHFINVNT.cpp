#include<bits/stdc++.h>
using namespace std;
#define  ll long long int


int main () {
    int t;
    cin >> t;
    while (t--) {
        ll N, p, K;
        cin >> N >> p >> K;
        int temp = p % K;
        
        int count = 0;
        int temp2 = N-1 - ((N-1)/K) * K;
        if(temp > temp2) {
            count = (temp) * ((N-1)/K)  + temp2  + 1;
        }
        else {
            count = temp * (((N-1)/K) +1) ;
        }
        for (int i = temp; i < N; i+=K) {
            count++;
            if(i == p) {
                break;
            }
        }
        
        cout << count << endl;
    }
    return 0;
}