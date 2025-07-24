#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;

int main(){ fastio
    int b, g, n, answer = 0; cin >> b >> g >> n;

    for(int i = 0; i <= n; i++){
        if(i <= b && (n-i) <= g){
            answer++;
        }
    }

    cout << answer;
}