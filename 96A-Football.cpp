#include <bits/stdc++.h>

using namespace std;

int main(){
    string players; cin >> players;
    int zeros = 0, ones = 0;
    for(int i = 0, size = players.length(); i < size; i++){
        if(players[i] == '1'){
            ones++;
            zeros = 0;
        }
        else{
            zeros++;
            ones = 0;
        }
        if(zeros == 7 || ones == 7){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}