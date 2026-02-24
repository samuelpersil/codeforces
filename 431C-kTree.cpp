#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define MOD 1000000007

using namespace std;

vector<vector<int>> dp;
int n, k, d;

int rec(int i, int j){
    if(i < 0){
        return 0;
    }
    if(i == 0){
        return j;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    dp[i][j] = 0;

    for(int w = 1; w <= k; w++){
        dp[i][j] = (dp[i][j] + rec(i - w, j || (w >= d))) % MOD;
    }

    return dp[i][j];
}

int main(){fastio
    cin >> n >> k >> d;

    dp.assign(n + 1, vector<int>(2, -1));
    dp[0][0] = 1;
    dp[0][1] = 0;

    cout << rec(n, 0) << endl;

    return 0;
}