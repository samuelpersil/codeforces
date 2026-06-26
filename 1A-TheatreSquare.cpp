#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    double n, m, k; cin >> n >> m >> k;

    ll ans = ceil(n / k) * ceil(m / k); 

    cout << ans << endl;


    return 0;
}