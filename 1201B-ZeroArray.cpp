#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); 
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    ll n; cin >> n;

    ll arr[n];

    for(auto &x : arr){
        cin >> x;
    }

    ll biggest = *max_element(arr, arr + n), sum = accumulate(arr, arr + n, 0LL);

    cout << (biggest <= sum - biggest && sum % 2 == 0 ? "YES" : "NO") << endl;

    return 0;
}