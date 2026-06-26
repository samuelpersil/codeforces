#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define ld long double
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        double c[n], p[n];

        for(int i = 0; i < n; i++){
            cin >> c[i] >> p[i];
        }
        
        ld ans = 0;

        for(int i = n - 1; i >= 0; i--){
            ans = max(ans, ans * (1 - p[i]/100) + c[i]);
        }

        cout << fixed << setprecision(10) << ans << endl;

    }

    return 0;
}