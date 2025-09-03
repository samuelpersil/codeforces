#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){fastio
    int n, answer = 0; cin >> n;

    while(n != 0){
        if(n % 2 == 1){
            answer++;
        }

        n /= 2;
    }

    cout << answer;

}