#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n; cin >> n;

    vector<int> arr(n), zeros;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 0) zeros.push_back(i);
    }

    int zero_actual = 0;
    for(int i = 0; i < n; i++){
        if(zero_actual + 1 < zeros.size() && abs(i - zeros[zero_actual]) > abs(i - zeros[zero_actual + 1])) zero_actual++;

        cout << abs(i - zeros[zero_actual]) << " ";
    }
    cout << endl;
}