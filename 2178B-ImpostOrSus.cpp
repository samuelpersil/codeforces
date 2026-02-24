#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        string s; cin >> s;
        int ans = 0;

        for(int i = 0, size = s.length(); i < size; i++){
            if(s[i] == 'u' && (i == 0 || i == size - 1)){
                s[i] = 's';
                ans++;
            }
            if(s[i] == 'u' && i + 1 < size && s[i + 1] == 'u'){
                s[i + 1] = 's';
                ans++;
            }
        }

        cout << ans << endl;
    }

}