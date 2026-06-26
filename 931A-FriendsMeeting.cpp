#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); 
#define ll long long
#define endl '\n'
#define MOD 1000000007

using namespace std;

int main(){fastio
    int a, b; cin >> a >> b;

    int distance = abs(a - b), stepsA = distance / 2, stepsB = distance - stepsA;
    cout << (stepsA * (stepsA + 1) / 2 + stepsB * (stepsB + 1) / 2) << endl;

    return 0;
}