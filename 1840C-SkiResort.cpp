#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'

using namespace std;

int32_t main(){fastio
    int t; cin >> t;

    while(t--){
        int n, k, q; cin >> n >> k >> q;

        int arr[n];

        for(auto &x : arr){
            cin >> x;
        }

        int streak = 0, ans = 0;

        for(auto x : arr){
            if(x <= q) streak++;
            else{
                if(streak >= k){
                    int aux = streak - k + 1;
                    ans += aux * (aux + 1) / 2;
                }
                streak = 0;
            }
        }

        if(streak >= k){
            int aux = streak - k + 1;
            ans += aux * (aux + 1) / 2;
        }

        cout << ans << endl;
    }

    return 0;
}