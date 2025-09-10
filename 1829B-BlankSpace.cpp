#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n, value_now, value_prev = 1, sum_now = 0, best = 0; cin >> n;

        while(n--){
            cin >> value_now;

            if(value_now == 0){
                sum_now++;
                best = max(sum_now, best);
            }
            else{
                sum_now = 0;
            }
        }

        cout << best << endl;        
    }
}