#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){fastio
    ll n, s, answer = 0; cin >> n >> s;

    answer += s / n;
    s %= n;
    answer += (s > 0 ? 1 : 0);

    cout << answer;

}