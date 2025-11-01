#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define int long long
#define N 10000000

using namespace std;

int sieve[N + 1] = {0};

int32_t main(){fastio
    vector<int> primes;
    sieve[0] = 1, sieve[1] = 1;
    for(int i = 2; i <= N; i+= 2) sieve[i] = 2;
    primes.push_back(2);
    for(int i = 3; i <= N; i += 2){
        if(!sieve[i]){
            primes.push_back(i);
            for(int j = i; j <= N; j+= i){
                    sieve[j] = i;
            }
        }
    }
    
    int q; cin >> q;

    while(q--){
        int n; cin >> n;

        int arr[n], even = 0, odd = 0, found = -1;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(auto p : primes){
            if(found != -1){
                break;
            }
            for(auto c : arr){
                if(c % p != 0){
                    found = p;
                    break;
                }
            }
        }
        cout << found << endl;
    }

    return 0;
}