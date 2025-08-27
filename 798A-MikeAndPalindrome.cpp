#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    string s; cin >> s;

    int diffs = 0, size = s.length();

    for(int i = 0; i < size / 2; i++){
        if(s[i] != s[size - i - 1]) diffs++;
    }

    if(diffs == 0 && size % 2 == 1) cout << "YES";
    else if(diffs == 1) cout << "YES";
    else cout << "NO";
}