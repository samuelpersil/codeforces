#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'
#define MAXN 200001

using namespace std;

int n, k, arr[MAXN];

bool ok(int mid){
    int operations = k;
    for(int i = n/2; i < n; i++){
        if(mid - arr[i] > operations) return false;
        if(arr[i] < mid) operations -= (mid - arr[i]);
    }

    return true;
}

int32_t main(){fastio
    cin >> n >> k;

    int l = 0, r = 0, ans = -1; 

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        r = max(r, arr[i]);
    }

    r += k;

    sort(arr, arr + n);

    while(l <= r){
        int mid = (l + r)/2;

        if(ok(mid)){
            l = mid + 1;
            ans = mid;
        }
        else{
            r = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}