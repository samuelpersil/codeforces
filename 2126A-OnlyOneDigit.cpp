#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'

using namespace std;

int main(){ fastio
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int freq[10];

        for(int i = 0; i < 10; i++){
            freq[i] = 0;
        }

        for(auto c : s){
            freq[c - '0']++;
        }

        for(int i = 0; i < 10; i++){
            if(freq[i] != 0){
                cout << i << endl;
                break;
            }
        }
    }
}