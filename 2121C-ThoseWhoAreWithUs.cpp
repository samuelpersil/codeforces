#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'

using namespace std;

int main(){ fastio
    int t; cin >> t;

    while(t--){
        int n, m; cin >> n >> m;
        int matrix[n][m], biggest = 0, biggest_count = 0, max_line = 0, max_column = 0, possible = 1;
        map<int, int> line, column;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> matrix[i][j];
                biggest = max(biggest, matrix[i][j]);
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == biggest){
                    line[i]++, column[j]++, biggest_count++;
                    max_line = max(max_line, line[i]), max_column = max(max_column, column[j]);
                }
            }
        }

        if(!(biggest_count - max_line - max_column == 0)) possible = 0;

        cout << (possible ? biggest - 1 : biggest) << endl;
    }
}