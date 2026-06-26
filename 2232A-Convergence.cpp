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
        int ans = 0;
        for(auto &x : arr) cin >> x;
        sort(arr, arr + n);

        for(int i = 0; i < n / 2; i++){
            if(arr[i] != arr[n/2] || arr[n - i - 1] != arr[n/2]){
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}