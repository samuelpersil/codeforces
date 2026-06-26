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
        for(auto &x : arr) cin >> x;

        sort(arr, arr + n, greater<int>());

        cout << arr[0] - arr[n - 1] + 1 << endl;
    }

    return 0;
}