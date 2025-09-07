#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    ll n; cin >> n;

    ll array[n], l = 0, r = 0, best = 1;

    for(ll i = 0; i < n; i++){
        cin >> array[i];
    }

    sort(array, array + n);

    while(r < n - 1){        
        if(array[r + 1] - array[l] <= 5){
            r++;
        }
        else{
            l++;
        }
        
        best = max(r - l + 1, best);
    }

    cout << best;

}