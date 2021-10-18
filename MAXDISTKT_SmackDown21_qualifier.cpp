#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int

bool compare(pair<ll,ll> &a, pair<ll,ll> &b) {
    return a.second < b.second;
}
int main () {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<pair<ll,ll>> a;

        for(int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            a.push_back(make_pair(x,i));
        }

        sort(a.begin(), a.end());

        ll k = 0;

        for(int i = 0; i < n; i++) {
            if(a[i].first > k) {
                a[i].first = k;
                k++;
            }
            else if(a[i].first == k) {
                a[i].first = k;
            }

        }

        sort(a.begin(), a.end(), compare);

        for(int i = 0; i < n; i++) {
            cout << a[i].first << " ";
        }
        cout << "\n";
    }
    return 0;
}