#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        int arr[n], costs[n];

        vector<ll> dp(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++){
            cin >> costs[i];
        }

        for(int i = 0; i < n; i++){
            dp[i] = costs[i];
            for(int j = 0; j < i; j++){
                if(arr[i] >= arr[j]) dp[i] = max(dp[i], dp[j] + costs[i]);
            }
        }

        cout << accumulate(costs, costs + n, 0ll) - *max_element(dp.begin(), dp.end()) << endl;
    }

    return 0;
}