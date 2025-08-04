#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define int long long

using namespace std;

int32_t main(){fastio
    int t; cin >> t;
    while(t--){
        int answer = 0, m, a, b, c; cin >> m >> a >> b >> c;
        answer += min(a, m);
        answer += min(b, m);
        answer += min(2 * m - answer, c);

        cout << answer << endl;
    }
}