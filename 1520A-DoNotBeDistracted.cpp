#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        map<char, int> freq;

        int answer = 1;

        char last_char = 'a';

        for(int i = 0; i < n; i++){
            if(freq[s[i]] != 0 && s[i] != last_char){
                answer = 0;
                break;
            }

            last_char = s[i];
            freq[s[i]]++;
        }
        cout << (answer ? "YES" : "NO") << endl;
    }
}