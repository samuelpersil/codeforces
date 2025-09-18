#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){fastio
    int a, b, c; cin >> a >> b >> c;

    cout << 4 * (sqrt(a * b / c) +sqrt(b * c / a) + sqrt(a * c / b));

}
