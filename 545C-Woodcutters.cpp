#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n; cin >> n;

    int x[n], h[n];

    for(int i = 0; i < n; i++){
        cin >> x[i] >> h[i];
    }

    // dp[i][j] where i is the tree and j is the state if
    // it didn't fell (0)
    // it fell to the left (1)
    // it fell to the right (2)
    int dp[n][3];

    memset(dp, 0, sizeof(dp));

    dp[0][0] = 0;
    dp[0][1] = 1;
    dp[0][2] = 1;

    for(int i = 1; i < n; i++){
        dp[i][0] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});

        if(x[i] - h[i] > x[i - 1]){
            dp[i][1] = max(dp[i - 1][0], dp[i - 1][1]) + 1;
        }

        if(x[i] - h[i] > x[i - 1] + h[i - 1]){
            dp[i][1] = max(dp[i][1], dp[i - 1][2] + 1);
        }

        if(i == n - 1 || (x[i] + h[i] < x[i + 1])){
            dp[i][2] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]}) + 1;
        }
    }

    cout << *max_element(dp[n - 1], dp[n - 1] + 3) << endl;

    return 0;
}