#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'

using namespace std;

int main(){ fastio
    int n; cin >> n;
    string s; cin >> s;
    unordered_map<char, int> freq;

    for(auto c : s){
        freq[c]++;
    }

    if(freq['n']){
        while(freq['n']){
            freq['n']--;
            cout << 1 << ' ';
        }

        while(freq['z']){
            freq['z']--;
            cout << 0 << ' ';
        }
    }
    else{
        while(freq['z']){
            freq['z']--;
            cout << 0 << ' ';
        }
    }

}