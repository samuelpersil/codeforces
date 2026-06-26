#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'

using namespace std;

signed main(){fastio
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int odds = 0;
        int ans = 0;
        int deletes = 0;
        for(auto c : s){
            if(c == '4') ans++;
            else if(c == '2'){
                deletes = min(odds, deletes + 1);
            }
            else{
                odds++;
            }
            // cout << odds << " " << twos << " " << ans << endl;
        }
        cout << ans + deletes << endl;        
    }

    return 0;
}