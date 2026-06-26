#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'

using namespace std;

signed main(){fastio
    int t; cin >> t;
    while(t--){
        int n, a, b; cin >> n >> a >> b;
        int groups = n / 3;
        int ans = 0;
        if(a * 3 > b){
            ans += b * groups;
            n -= groups * 3;
        }
        else{
            ans += a * n;
            n = 0;
        }
        ans += min(a * n, b);
        cout << ans << endl;
    }


    return 0;
}