#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'
#define MOD 1000000007

using namespace std;

int32_t main(){fastio
    int n, k; cin >> n >> k;

    int l = 0, r = 1000000007, ans = -1, mid;

    while(ans == -1){
        mid = (l + r) / 2;
        int search = mid * (mid + 1) / 2 - (n - mid);

        if(search == k){
            ans = n - mid;
        }
        else if(search > k){
            r = mid - 1;
        }
        else l = mid + 1;
    }

    cout << ans << endl;
}