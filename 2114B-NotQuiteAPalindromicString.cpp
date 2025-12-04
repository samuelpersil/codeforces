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

        int zeros = 0, ones = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '0') zeros++;
            else ones++;
        }

        int maxi = ones / 2 + zeros / 2, mini = abs(zeros - ones) / 2;

        if(k <= maxi && k >= mini && k % 2 == mini % 2) cout << "YES" << endl;

        else cout << "NO" << endl;
    }
}