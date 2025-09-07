#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int n, m; cin >> n >> m;

    string matrix[n];

    for(int i = 0; i < n; i++){
        cin >> matrix[i];
    }

    for(int j = 1 ; j < m; j++){
        if(matrix[0][j] != matrix[0][j - 1]){
            cout << "NO";
            return 0;
        }
    }

    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if(matrix[i][j] != matrix[i][j - 1] || matrix[i][j] == matrix[i - 1][j]){
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";
}