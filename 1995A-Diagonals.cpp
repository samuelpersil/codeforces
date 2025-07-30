#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){ fastio
    int t; cin >> t;
    while(t--){
        int n, k, answer = 0; cin >> n >> k;

        for(int i = 1; k > 0; i++){
            if(i >= 2) k -= (n - (i / 2));
            else k -= n;

            answer++;
        }

        cout << answer << endl;
        
    }

}