#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define F first
#define S second

using namespace std;

bool comp(pair<int, string> a, pair<int, string> b){
    return a.F < b.F;
}

int main(){fastio
    int a, b, c; cin >> a >> b >> c;

    ll n, answer_count = 0, answer_cost = 0; cin >> n;

    pair<int, string> prices[n];
    
    for(int i = 0; i < n; i++){
        cin >> prices[i].F >> prices[i].S;
    }

    sort(prices, prices + n, comp);

    for(int i = 0; i < n; i++){
        if(a == 0 && b == 0 && c == 0) break;
        if(prices[i].S == "USB" && a > 0){
            a--; answer_count++; answer_cost += prices[i].F;
        }
        else if(prices[i].S == "PS/2" && b > 0){
            b--; answer_count++; answer_cost += prices[i].F;
        }
        else if(c > 0){
            c--; answer_count++; answer_cost += prices[i].F;
        }
    }

    cout << answer_count << " " << answer_cost << endl;

}