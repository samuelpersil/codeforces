#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main(){ fastio
    int n, k, participants = 0, participant; cin >> n >> k;
    while(n--){
        cin >> participant;
        if(participant <= 5 - k){
            participants++;
        }
    }

    cout << participants/3;

}