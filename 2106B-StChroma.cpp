#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n, x; cin >> n >> x;

        int printed = 0;
        for(int i = 0; i < n; i++){
            if(i < x) cout << i << " ";
            else if(i + 1 < n) cout << i + 1 << " ";
            else cout << x << " ";
        }
        cout << endl;
    }
}