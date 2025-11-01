#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n, k; cin >> n >> k;

    long double answer = 0, x1, y1, x2, y2;
    int first = 1;
    for(int i = 0; i < n; i++){
        cin >> x2 >> y2;

        if(!first){
            answer += sqrtl(abs(x2 - x1) * abs(x2 - x1) + abs(y2 - y1) * abs(y2 - y1));
        }
        else first = 0;

        x1 = x2, y1 = y2;
    }

    cout << fixed << setprecision(9) << k * answer/50 << endl;

    return 0;
}