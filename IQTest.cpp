#include <bits/stdc++.h>

using namespace std;

int main(){
    string array[4];
    for(int i = 0; i < 4; i++){
        cin >> array[i];
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if((array[i + 1][j] == array[i][j + 1] && array[i][j + 1] == array[i + 1][j + 1]) ||
               (array[i][j] == array[i][j + 1] && array[i][j + 1] == array[i + 1][j + 1]) ||
               (array[i][j] == array[i + 1][j] && array[i + 1][j] == array[i + 1][j + 1]) ||
               (array[i][j] == array[i + 1][j] && array[i + 1][j] == array[i][j + 1] )){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}