#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    string s; cin >> s;

    int zeros = 0, start = 0;

    for(int i = 0, size = s.length(); i < size; i++){
        if(s[i] == '1') start = 1;
        else if(s[i] == '0' && start) zeros++;
    }

    cout << (zeros >= 6 ? "YES" : "NO") << endl;

    return 0;
}