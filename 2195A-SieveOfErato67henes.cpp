#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define MAXN 68

using namespace std;

vector<int> sieve(MAXN, 1);

int main(){fastio
    for(int i = 2; i < MAXN; i++){
        if(sieve[i] == 1){
            sieve[i] = i;
            for(int j = i * i; j < MAXN; j += i){
                sieve[j] = i;
            }
        }
    }

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        bool ans = false;
        for(auto &x : arr) cin >> x;
        for(int i = 0; ans == false && i < n; i++){
            while(arr[i] != 1){
                if(sieve[arr[i]] == 67){
                    ans = true;
                    break;
                }
                arr[i] /= sieve[arr[i]];
            }
        }

        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}