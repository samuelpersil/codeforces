#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end()

using namespace std;

int32_t main(){ fastio
    int t; cin >> t;

    while(t--){
        int n, k; cin >> n >> k;

        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
            a[i] = a[i] % k;
            a[i] = min(a[i], k - a[i]);
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
            b[i] = b[i] % k;
            b[i] = min(b[i], k - b[i]);
        }

        sort(all(a)); sort(all(b));

        cout << (a == b ? "YES" : "NO") << endl;
    }
}

