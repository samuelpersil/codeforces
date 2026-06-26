#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        int arr[n], valid = 1;

        for(int &x : arr) cin >> x;
        sort(arr, arr + n, greater<int>());

        for(int i = 0; i < n - 1; i++){
            if(arr[i] == arr[i + 1]){
                valid = 0;
                break;
            }
        }
        if(valid){
            for(int x : arr) cout << x << " ";
            cout << endl;
        }
        else cout << -1 << endl;

    }

    return 0;
}