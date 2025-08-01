#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'


using namespace std;

int main(){ fastio
    int n; cin >> n;
    string s; cin >> s;

    int ones = 0;

    for(auto c : s){
        if(c == '1') ones++;
    }

    cout << n - 2 * min(ones, n - ones);
}