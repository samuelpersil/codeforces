#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int q; cin >> q;

    while(q--){
        int size, answer = 1, changed; cin >> size;

        string s, t; cin >> s >> t;

        for(int i = 0; i < size; i++){
            if(s[i] != t[i]){
                if(t[i] - s[i] != 1){
                    answer = 0;
                    break;
                }

                changed = 0;
                for(int j = i + 1; j < size; j++){
                    if(s[j] == t[i]){
                        swap(s[j], s[i]);
                        changed = 1;
                        break;
                    }
                    else if(s[j] != s[i]) break;
                }

                if(!changed){
                    answer = 0;
                    break;
                }
            }
        }

        cout << (answer ? "YES" : "NO") << endl;
    }

}