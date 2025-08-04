#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define F first
#define S second

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    if(a.S != b.S) return a.S > b.S;
    return a.F > b.F;
}

int32_t main(){fastio
    int t; cin >> t;
    while(t--){
        int n, m, value; cin >> n >> m;
        pair<int, int> sums[n];
        for(int i = 0; i < n; i++){
            int sum1 = 0, sum2 = 0;
            for(int j = 0; j < m; j++){
                cin >> value;
                sum1 += (m - j) * value;
                sum2 += value;
            }
            sums[i].F = sum1;
            sums[i].S = sum2;
        }

        sort(sums, sums + n, comp);

        int answer = 0;

        for(int i = 0; i < n; i++){
            answer += sums[i].F + ((n - 1 - i) * m) * sums[i].S;
        }

        cout << answer << endl;
    }
}