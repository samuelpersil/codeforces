#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define oo 1000000000

using namespace std;

int main(){fastio
    int n; cin >> n;
    int cuts[3]; cin >> cuts[0] >> cuts[1] >> cuts[2];

    int dp[n + 1];
    dp[0] = 0;
    
    for(int i = 1; i <= n; i++){
        dp[i] = -oo;
        for(auto c : cuts){
            if(i - c >= 0){
                dp[i] = max(dp[i], dp[i - c] + 1);
            }
        }
    }

    cout << dp[n] << endl;

    return 0;
}