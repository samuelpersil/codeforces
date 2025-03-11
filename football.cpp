#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int maxscore = 0; string maxteam;
    string score;
    map<string, int> goals;
    
    for(int i = 0; i < n; i++){
        cin >> score;
        goals[score]++;
        if(goals[score] > maxscore){
            maxteam = score;
            maxscore = goals[score];
        }
    }
    cout << maxteam;
}