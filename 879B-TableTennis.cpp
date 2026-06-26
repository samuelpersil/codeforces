#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    ll n, k; cin >> n >> k;

    int arr[n];

    for(auto &x : arr){
        cin >> x;
    }

    int streak = 0, current = 0, winner;

    for(int i = 1; i < n; i++){
        winner = (arr[i] > arr[current] ? i : current);
        if(current == winner) streak++;
        else streak = 1;

        if(streak >= k){
            cout << arr[current] << endl;
            return 0;
        }

        current = winner;
    }

    cout << arr[current] << endl;

    return 0;
}