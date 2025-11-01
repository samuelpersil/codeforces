#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'

using namespace std;

int32_t main(){fastio
    int n; cin >> n;

    int answer = 0;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<int>());

    for(int pot = 0; (1LL << pot) <= n; pot += 2){
        for(int i = 0; i < n && i < (1LL << pot); i++){
            answer += arr[i];
        }
    }

    cout << answer << endl;

    return 0;
}