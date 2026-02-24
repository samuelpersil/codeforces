#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        string s; cin >> s;
        int ys = 0;

        for(auto c : s){
            if(c == 'Y') ys++;
        }
        if(ys >= 2){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

}