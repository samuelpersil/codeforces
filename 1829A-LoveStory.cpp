#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    string code = "codeforces";

    while(t--){
        string s; cin >> s;

        int answer = 0;
        for(int i = 0, size = code.length(); i < size; i++){
            if(s[i] != code[i]) answer++;
        }

        cout << answer << endl;
    }
}