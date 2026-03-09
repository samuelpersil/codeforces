#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio

    int n, m; cin >> n >> m;

    int arr[n], ss[n];

    set<int> s;

    for(auto &x : arr){
        cin >> x;
    }

    for(int i = n - 1; i >= 0; i--){
        s.insert(arr[i]);
        ss[i] = s.size();
    }

    while(m--){
        int val; cin >> val;

        cout << ss[val - 1] << endl;
    }

    
    cout << endl;
}