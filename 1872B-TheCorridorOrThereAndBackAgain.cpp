#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define oo 1000000000

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        double d, s, ans = oo;

        for(int i = 0; i < n; i++){
            cin >> d >> s;

            ans = min(ans, d + ceil(s/2) - 1);
        }

        cout << ans << endl;
        
    }

    return 0;
}