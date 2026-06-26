#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n; cin >> n;
    int arr[n];
    for(auto &x : arr) cin >> x;

    sort(arr, arr + n);
    
    int median = arr[n / 2], best_cost = 1e9, best_t;

    for(int i = median - 1; i <= median + 1; i++){
        if(i <= 0) continue;
        int cost = 0;
        for(int x : arr){
            if(abs(x - i) > 1) cost += abs(x - i) - 1;
        }

        if(cost < best_cost){
            best_t = i;
            best_cost = cost;
        }
    }

    cout << best_t << " " << best_cost << endl;

    return 0;
}