#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio

    int n, k; cin >> n >> k;

    vector<int> arr(n);

    for(auto &x : arr){
        cin >> x;
    }

    map<ll, ll> m1, m2;
    ll ans = 0;

    for(auto x : arr){
        if(x % k == 0){
            ans += m2[x/k];
            m2[x] += m1[x/k];
        }

        m1[x]++;
    }
    
    cout << ans << endl;
}