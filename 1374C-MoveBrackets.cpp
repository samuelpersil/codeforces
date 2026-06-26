#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        int ans = 0, open = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '(') open++;
            else{
                if(open > 0) open--;
                else{
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}