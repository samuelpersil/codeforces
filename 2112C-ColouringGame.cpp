#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

using namespace std;

int main(){ fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        ll array[n], resposta = 0;
        for(int i = 0; i < n; i++){
            cin >> array[i];
        }

        for(int i = 2; i < n; i++){
            int m = max(array[i], array[n - 1] - array[i]);
            int a = 0, b = i - 1;
            while(a < b){
                if(array[a] + array[b] > m){
                    resposta += b - a;
                    b--;        
                }
                else a++;
            }
        }

        cout << resposta << endl;
    }
}