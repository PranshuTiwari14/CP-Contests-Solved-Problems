#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main () {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        char min = 'z';
        int pos = -1;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] <= min) {
                min = s[i];
                pos = i;
            }
        }
        string a = "";
        a += min;
        string b ;
        for(int i = 0; i < s.length(); i++) {
            if(i == pos) {
                continue;
            }
            else{
                b += s[i];
            }
        }
        cout << a << " " << b << endl;
    }
    return 0;
}
