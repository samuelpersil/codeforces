#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n, k; cin >> n >> k;

    k--;

    int arr[n];
    for(auto &x : arr) cin >> x;

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] >= arr[k] && arr[i] != 0){
            ans++;
        }
        else break;
    }
    cout << ans << endl;

    return 0;
}