#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'

using namespace std;

int check(int mid, vector<int>& arr){
    int carvers = 0, r = -1;
    for(auto x : arr){
        if(x > r){
            carvers++;
            r = x + 2 * mid;
        }
    }
    if(carvers <= 3) return 1;
    return 0;
}

int32_t main(){fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector<int> arr(n);

        for(int &x : arr){
            cin >> x;
        }

        sort(arr.begin(), arr.end());

        int l = 0, r = 1e9;

        while(l <= r){
            int mid = (l + r) / 2;
            if(check(mid, arr)){
                r = mid - 1; 
            }
            else{
                l = mid + 1; 
            }
        }

        cout << l << endl;
    }

    return 0;
}