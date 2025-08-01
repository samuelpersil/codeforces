#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long
#define F first
#define S second

using namespace std;

int main(){ fastio
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], b[n];
        vector<pair<int, int>> operations;

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < n - i - 1; j++){
                if(a[j] > a[j + 1]){
                    swap(a[j], a[j + 1]);
                    operations.push_back({1, j + 1});
                }
            }
        }

        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < n - i - 1; j++){
                if(b[j] > b[j + 1]){
                    swap(b[j], b[j + 1]);
                    operations.push_back({2, j + 1});
                }
            }
        }

        for(int i = 0; i < n; i++){
            if(a[i] > b[i]){
                swap(a[i], b[i]);
                operations.push_back({3, i + 1});
            }
        }

        cout << operations.size() << endl;

        for(auto op : operations){
            cout << op.F << " " << op.S << endl;
        }


    }
}