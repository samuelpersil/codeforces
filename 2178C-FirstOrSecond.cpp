#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        int arr[n];

        for(auto &x : arr){
            cin >> x;
        }

        ll as[n], ss[n]; //absolute preffix sum and suffix sum, excluding the first element

        as[0] = 0, as[1] = 0, ss[n - 1] = 0;
        for(int i = 2; i < n; i++){
            as[i] = as[i - 1] + abs(arr[i - 1]);
        }

        for(int i = n - 2; i >= 0; i--){
            ss[i] = ss[i + 1] + arr[i + 1];
        }

        ll ans = - ss[0];

        // for(int i = 0; i < n; i++){
        //     cout << as[i] << endl;
        // }
        // cout << "---------" << endl;

        // for(int i = 0; i < n; i++){
        //     cout << ss[i] << endl;
        // }
        // cout << "---------" << endl;
        
        for(int i = 1; i < n; i++){
            ans = max(ans, as[i] + arr[0] - ss[i]);
        }
        cout << ans << endl;
    }

    return 0;
}