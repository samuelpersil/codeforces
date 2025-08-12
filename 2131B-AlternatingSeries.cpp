#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define int long long

using namespace std;

int32_t main(){ fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        if(n == 2){
            cout << "-1 2" << endl;
            continue;
        }

        for(int i = 1; i < n + 1; i++){
            if(i % 2 == 1) cout << "-1 ";
            else if(i == n) cout << "2 ";
            else cout << 3 << " ";
        }

        cout << endl;
    }
}