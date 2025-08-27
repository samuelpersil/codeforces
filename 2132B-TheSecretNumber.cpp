#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long
#define F first
#define S second

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        ll n; cin >> n;
        vector<ll> answer;

        for(ll k = 10; k + 1 <= n; k *= 10){
            if(n % (k + 1) == 0){
                answer.push_back(n / (k + 1));
            }
        }

        cout << answer.size() << endl;

        if(answer.size() == 0) continue;

        for(int i = answer.size() - 1; i >= 0; i--){
            cout << answer[i] << " ";
        }
        cout << endl;
    }

}