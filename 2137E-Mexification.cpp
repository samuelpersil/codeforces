#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'

using namespace std;

int32_t main(){fastio
    int t; cin >> t;

    while(t--){
        int n, k; cin >> n >> k;

        vector<int> arr(n);
        for(auto &x : arr){
            cin >> x;
        }

        for(int i = 0; i < min(k, k % 2 + 2); i++){
            vector<int> freq(n + 1, 0);
            
            for(auto x : arr){
                freq[x]++;
            }
            int mex = 0;
            while(freq[mex]){
                mex++;
            }

            for(auto &x : arr){
                if(x >= mex) x = mex;
                else if(freq[x] > 1) x = mex;
            }
        }

        cout << (accumulate(arr.begin(), arr.end(), 0LL)) << endl;
    }

    return 0;
}