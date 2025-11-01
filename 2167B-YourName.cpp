#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){fastio
    int q; cin >> q;

    while(q--){
        int n; cin >> n;

        string s, t; cin >> s >> t;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s == t) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}