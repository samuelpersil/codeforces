#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, plane, maxmoney = 0, minmoney = 0; 
    cin >> n >> m;
    vector<int> max_empties;
    vector<int> min_empties;
    for(int i = 0; i < m; i++){
        cin >> plane;
        max_empties.push_back(plane);
        min_empties.push_back(plane);
    }
    for(int i = 0; i < n; i++){
        maxmoney += *max_element(max_empties.begin(), max_empties.end());
        if(*max_element(max_empties.begin(), max_empties.end()) - 1 > 0){
            max_empties.push_back(*max_element(max_empties.begin(), max_empties.end()) - 1);
            max_empties.erase(max_element(max_empties.begin(), max_empties.end()));
        }
        else max_empties.erase(max_element(max_empties.begin(), max_empties.end()));
        
    }
    for(int i = 0; i < n; i++){
        int temp = *min_element(min_empties.begin(), min_empties.end());
        minmoney += *min_element(min_empties.begin(), min_empties.end());
        if(*min_element(min_empties.begin(), min_empties.end()) - 1 > 0){
            min_empties.erase(min_element(min_empties.begin(), min_empties.end()));
            min_empties.push_back(temp - 1);
        }
        else min_empties.erase(min_element(min_empties.begin(), min_empties.end()));
    }

    cout << maxmoney << " " << minmoney;
}