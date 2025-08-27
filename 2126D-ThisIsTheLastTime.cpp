#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

struct Casino{
    ll l, r, real;
};

bool comp(Casino a, Casino b){
    return a.l < b.l;
}

int main(){fastio
    int t; cin >> t;

    while(t--){
        ll n, k, answer; cin >> n >> k;

        Casino casinos[n];

        for(int i = 0; i < n; i++){
            cin >> casinos[i].l >> casinos[i].r >> casinos[i].real;
        }

        sort(casinos, casinos + n, comp);

        answer = k;

        for(int i = 0; i < n; i++){
            if(casinos[i].l > answer) break;

            answer = max(answer, casinos[i].real);
        }

        cout << answer << endl;
    }

}