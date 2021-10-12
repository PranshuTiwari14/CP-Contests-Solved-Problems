#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        int n;
        cin >> n;
        int x = n/2;
        if(x%2 == 0) {
            cout << "YES" << endl;
            for(int i = 1; i <= n/2; i+=2) {
                cout << i << " ";
            }
            for(int i =  n; i>n/2; i-=2) {
                cout << i << " ";
            }
            cout << endl;
            for(int i = 2; i <=n/2; i+=2) {
                cout << i <<  " ";
            }
            for(int i = n-1; i>n/2;  i-=2) {
                cout << i << " ";
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}