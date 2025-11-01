#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    string s; cin >> s;

    int size = s.length();
    vector<int> ok(size + 1, 0);

    ok[0] = 0;

    for(int i = 1; i <= size - 1; i++){
        if(s[i - 1] == s[i]) ok[i]++;
        ok[i] += ok[i - 1];
    }


    int q; cin >> q;

    while(q--){
        int l, r; cin >> l >> r;
        r--;
        cout << ok[r] - ok[l - 1] << endl;
    }


    return 0;
}