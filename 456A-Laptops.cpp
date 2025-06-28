#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first) return a.first < b.first;
    return a.second > b.second;
}

int main(){
    int t; cin >> t;
    int value1, value2;
    vector<pair<int, int>> laptops;
    while(t--){
        cin >> value1 >> value2;
        laptops.push_back({value1, value2});
    }

    sort(laptops.begin(), laptops.end(), comp);

    for(int i = 1, size = laptops.size(); i < size; i++){
        if(laptops[i - 1].second > laptops[i].second){
            cout << "Happy Alex";
            return 0;
        }
    }

    cout << "Poor Alex";
}