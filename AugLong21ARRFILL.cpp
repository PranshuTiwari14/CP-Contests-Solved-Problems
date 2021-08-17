#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{ int t;
  cin >> t;
  while(t--) {
    ll n, m;
    cin>>n>>m;

    vector<pair<int,int>>v;

    for (int i=0; i < m; i++)
    {
      ll x, y;
      cin >> x >> y;
      v.push_back({x,y});
    }

    sort(v.begin(), v.end(), greater<pair<int,int>>());
    
    ll lcm = 1;
    ll left = n;
    ll sum = 0;
    
    for (int i=0; i<m && left>0; i++)
    {
      ll a= v[i].first, b=v[i].second;
      lcm = lcm*b/__gcd(lcm,b);
      sum += (left-n/lcm)*a;
      left = n/lcm;
    }
    cout << sum << endl;
  }
  return 0;
}