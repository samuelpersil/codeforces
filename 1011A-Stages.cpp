#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n, k; cin >> n >> k;
    string s, ans = ""; cin >> s;

    sort(s.begin(), s.end());

    for(char x : s){
        if(ans == "" || (x - 'a' >= ans.back() - 'a' + 2)){
            ans.push_back(x);
        }
    }

    if(ans.length() >= k){
        int sum = 0;
        for(int i = 0; i < k; i++){
            sum += (ans[i] - 'a') + 1;
        }
        cout << sum << endl;
    }
    else cout << -1 << endl;
}