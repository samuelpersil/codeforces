#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define F first
#define S second
#define endl '\n'
#define ll long long
#define all(x) x.begin(), x.end()

using namespace std;

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){ fastio
    int t; cin >> t;
    while(t--){
        ll a, b, k; cin >> a >> b >> k;
        if(max(a, b) <= k){
            cout << 1 << endl;
        }
        else{
            ll divisor = gcd(a, b);
            if(max(a / divisor, b / divisor) <= k) cout << 1 << endl;
            else cout << 2 << endl;
        }
    }
}