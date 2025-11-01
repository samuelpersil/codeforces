#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'
#define MAXN 200001

using namespace std;

int nums[MAXN], n, x;

bool search(int h){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(h - nums[i] > 0) sum += h - nums[i];
    }
    if(sum <= x) return true;

    return false;
}

int32_t main(){fastio
    int t; cin >> t;

    while(t--){
        cin >> n >> x;

        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }

        int l = 0, r = 2000000000;

        while(l < r){
            int mid = (l + r + 1) / 2;
            if(search(mid)){
                l = mid;
            }
            else{
                r = mid - 1;
            }
        }

        cout << r << endl;
    }
}