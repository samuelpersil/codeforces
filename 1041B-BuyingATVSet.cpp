#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){fastio
    ll a, b, x, y; cin >> a >> b >> x >> y;

    ll divider = gcd(x, y);

    x /= divider;
    y /= divider;

    cout << min(a/x, b/y);
}