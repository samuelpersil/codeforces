#include <bits/stdc++.h>

using namespace std;

int main(){
    int lights[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int toggles[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> toggles[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            pair<int, int> neighboorhood[] = {{i, j - 1}, {i - 1, j}, {i, j}, {i + 1, j}, {i, j + 1}};
            for(int k = 0; k < 5; k++){
                if(neighboorhood[k].first < 0 || neighboorhood[k].first >= 3 || neighboorhood[k].second < 0 || neighboorhood[k].second >= 3){
                    continue;
                }
                if(toggles[neighboorhood[k].first][neighboorhood[k].second] % 2 == 1){
                    lights[i][j] = (lights[i][j] == 1 ? 0 : 1);
                }
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << lights[i][j];
        }
        cout << endl;
    }

    return 0;
}