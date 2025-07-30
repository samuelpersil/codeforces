#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n, a, b; cin >> n;
    int array[n];

    for(int i = 0; i < n - 1; i++){
        cin >> array[i];
    }

    cin >> a >> b;

    int answer = 0;

    for(int i = a - 1; i < b - 1; i++){
        answer += array[i];
    }

    cout << answer;

}