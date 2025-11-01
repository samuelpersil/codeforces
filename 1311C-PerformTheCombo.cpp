#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n, m; cin >> n >> m;
        string s; cin >> s;
        vector<int> tries(m);

        for(int i = 0; i < m; i++){
            cin >> tries[i];
        }        
        
        vector<int> freq(26, 0);
        vector<int> delta(n, 0);

        for(auto t : tries){
            delta[0]++;
            if(t < n) delta[t]--;
        }

        int now = 1;
        for(int i = 0; i < n; i++){
            now += delta[i];
            freq[s[i] - 'a'] += now;
        }

        for(int i = 0; i < 26; i++){
            cout << freq[i] << " ";
        }

        cout << endl;

    }


    return 0;

}