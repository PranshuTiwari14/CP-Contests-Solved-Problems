#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
       int a[4];
       for(int i =0; i < 4; i++) {
           cin >> a[i];
       }
        sort(a,a+4);
        set<int> s;
        s.insert(a[0]);
        s.insert(a[1]);
        s.insert(a[2]);
        s.insert(a[3]);
        if(s.size() == 1) {
            cout << 0 << endl;
        }
        else if(s.size() == 2) {
            if((a[0] == a[1]) && (a[2] == a[3])){
                cout << 2 << endl;
            }
            else{
                cout << 1 << endl;
            }
        }
        else if(s.size() == 3) {
            cout << 2 << endl;
        }
        else if(s.size() == 4) {
            cout << 2 << endl;
        }
    }
    return 0;
}