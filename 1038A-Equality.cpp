#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); 
#define ll long long
#define endl '\n'
#define MOD 1000000007

using namespace std;

int main(){fastio
    int n, k; cin >> n >> k;

    string s; cin >> s;
    vector<int> freq(26, 0);

    for(char x : s){
        freq[x - 'A']++;
    }

    int ans = 1e9;
    for(int i = 0; i < k; i++){
        ans = min(ans, freq[i]);
    }

    cout << (ans * k) << endl;

    return 0;
}