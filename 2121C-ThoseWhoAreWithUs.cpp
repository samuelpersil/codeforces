#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'

using namespace std;

int main(){ fastio
    int t; cin >> t;

    while(t--){
        int n, m; cin >> n >> m;
        int matrix[n][m], biggest = 0, biggest_count = 0, possible = 0;
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
                }
            }
        }

        int max2 = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                max2 = max(max2, line[i] + column[j] - (matrix[i][j] == biggest));
            }
        }

        if(max2 == biggest_count) possible = 1;

        cout << (possible ? biggest - 1 : biggest) << endl;
    }
}