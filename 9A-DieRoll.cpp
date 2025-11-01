#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int a, b; cin >> a >> b;

    int possibilities = 6 - max(a, b) + 1, divisor = __gcd(possibilities, 6);

    cout << possibilities/divisor << "/" << 6/divisor << endl;
}