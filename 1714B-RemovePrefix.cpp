#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        set<int> s;
        for(int &x : arr){
            cin >> x;
        }
        for(int i = n - 1; i >= 0; i--){
            if(s.count(arr[i]) != 0){
                break;
            }
            s.insert(arr[i]);
        }

        cout << n - s.size() << endl;
    }
    return 0;
}