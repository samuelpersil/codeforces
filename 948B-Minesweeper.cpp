#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define F first
#define S second

using namespace std;

int main(){fastio
    int n, m; cin >> n >> m;

    string matrix[n];

    for(int i = 0; i < n; i++){
        cin >> matrix[i];
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            pair<int , int> neighbors[] = {{i - 1, j - 1}, {i - 1, j}, {i - 1, j + 1}, {i, j - 1}, {i, j + 1}, {i + 1, j - 1}, {i + 1, j}, {i + 1, j + 1}};

            if(matrix[i][j] != '*'){
                int bombs = (matrix[i][j] == '.' ? 0 : matrix[i][j] - '0'), count = 0;

                for(auto v : neighbors){
                    if(v.F >= 0 && v.F < n && v.S >= 0 && v.S < m){
                        if(matrix[v.F][v.S] == '*') count++;
                    }
                }

                if(bombs != count){
                    cout << "NO";
                    return 0;
                }
            }
        }
    }

    cout << "YES";
}