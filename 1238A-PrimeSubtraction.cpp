#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        ll a, b; cin >> a >> b;

        if(a - b > 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}