#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    int t;
    cin >> t;
    while (t--) {
       string s;
       cin >> s;
       if(s.length() == 1) {
           cout << s << endl;
       }
       else{
           if(s[0] == s[s.length() - 1]) {
               cout << s << endl;
           }
           else{
               cout << s.substr(0,s.length() - 1) << s[0] << endl;
           }
       }

    }
    
    
    return 0;
}