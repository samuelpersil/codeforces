#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n, c0, c1, h; cin >> n >> c0 >> c1 >> h;
        string s; cin >> s;

        int answer = 0;

        for(int i = 0; i < n; i++){
            answer += (s[i] == '0' ? min(c0, c1 + h) : min(c1, c0 + h));            
        }

        cout << answer << endl;
    }


}