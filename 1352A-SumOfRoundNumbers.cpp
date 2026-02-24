#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector<int> ans;

        int power = 1;

        while(n){
            if(n % 10 != 0){
                ans.push_back(n % 10 * power);
            }

            power *= 10;
            n /= 10;
        }

        cout << ans.size() << endl;

        if(ans.size()){
            for(auto x : ans){
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}