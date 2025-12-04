#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio

    int n; cin >> n;

    ll sum = 0, capacities[n];

    for(int i = 0; i < n; i++){
        int val; cin >> val;

        sum += val;
    }

    for(int i = 0; i < n; i++){
        cin >> capacities[i];
    }

    sort(capacities, capacities + n, greater<ll>());

    if(capacities[0] + capacities[1] >= sum){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

    return 0;
}