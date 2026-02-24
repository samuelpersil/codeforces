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

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int ans = 0, l = 0, r = n - 1;

        while(l <= r){
            ans += arr[r] - arr[l];
            r--;
            l++;
        }

        cout << ans << endl;
    }

    return 0;
}