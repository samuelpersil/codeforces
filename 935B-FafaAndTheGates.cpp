#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    int x = 0, y = 0, answer = 0, kingdom = 0;

    while(t--){
        char c; cin >> c;

        if(c == 'U') y++;
        else x++;

        if(kingdom == 0){
            kingdom = (int) (x < y) + 1;
            continue;
        }

        if((x > y && kingdom == 2) || (x < y && kingdom == 1)){
            answer++;
            kingdom = 3 - kingdom;
        }                        
    }

    cout << answer << endl;
}