#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n, f, k; cin >> n >> f >> k;

        f--;

        vector<int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int chosen = arr[f];

        sort(arr.begin(), arr.end(), greater<int>());

        if(arr[k - 1] == chosen){
            if(k < n && arr[k] == chosen){
                cout << "MAYBE" << endl;
            }
            else cout << "YES" << endl;
        }
        else if(arr[k -1] > chosen) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}

// 5 2 2
// 4 3 3 2 3

// fav = 3

// 