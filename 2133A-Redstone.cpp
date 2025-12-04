#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        int ans = 0;

        map<int, int> freq;
        for(int i = 0; i < n; i++){
            int value; cin >> value;

            freq[value]++;
            if(freq[value] > 1) ans = 1;
        }

        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}