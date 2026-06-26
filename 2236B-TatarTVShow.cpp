#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                if(i + k < n){
                    s[i] = '0';
                    s[i + k] = (s[i + k] == '0' ? '1' : '0');
                }
                else{
                    break;
                }
            }
            else if(i == n - 1) ans = 1;
        }
        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}