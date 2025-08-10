#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'

using namespace std;

int32_t main(){
    int k, n, w; cin >> k >> n >> w;

    int answer = w * (k * w +  k) / 2 - n;

    cout << (answer >= 0 ? answer : 0);
}