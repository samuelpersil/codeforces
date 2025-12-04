#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'

using namespace std;

int sum_digits(int a){
    if(a < 0) return 0;
    int s = 0;
    while(a > 0){
        s += a % 10;
        a /= 10;
    }

    return s;
}

int fexp(int a, int b){
    if(b == 0) return 1;
    else if(b % 2 == 0){
        int half = fexp(a, b / 2);
        return half * half;
    }

    return fexp(a, b - 1) * a;
}

int32_t main(){fastio
    int a, b, c; cin >> a >> b >> c;

    set<int> s;

    for(int i = 1; i <= 81; i++){
        int ans = b * fexp(i, a) + c;
        if(sum_digits(ans) == i && ans > 0 && ans < 1000000000){
            s.insert(ans);
        }
    }

    cout << s.size() << endl;
    for(auto c : s){
        cout << c << " ";
    }
    cout << endl;

    return 0;
}