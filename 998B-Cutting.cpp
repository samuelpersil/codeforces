#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int sz;
vector<int> possibles_costs;

int rec(int i, int j, vector<vector<int>>& dp){
    if(i >= sz){
        return 0;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int pega = 0;
    int npega = rec(i + 1, j, dp);

    if(j - possibles_costs[i] >= 0) pega = rec(i + 1, j - possibles_costs[i], dp) + 1;

    return dp[i][j] = max(pega, npega);
}

int main(){fastio
    int n, b; cin >> n >> b;

    int arr[n], count = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        count += (arr[i] % 2 == 0 ? -1 : 1);
        if(count == 0 && i < n - 1) {
            possibles_costs.push_back(abs(arr[i] - arr[i + 1]));
        }
    }

    sz = possibles_costs.size();
    vector<vector<int>> dp(sz, vector<int>(b + 1, -1));

    cout << rec(0, b, dp) << endl;

    return 0;
}