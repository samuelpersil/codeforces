#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cout.tie(nullptr); cin.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){fastio
    ll l, r; cin >> l >> r;
    cout << (l < r ? 2 : l);
}