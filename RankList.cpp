#include <bits/stdc++.h>
#define F first
#define S second

using namespace std;

bool compute(pair<int, int> a, pair<int,int> b){
    if(a.F != b.F){
        return a.F > b.F;
    }
    return a.S < b.S;
}

int main(){
    int n, k; cin >> n >> k;
    vector<pair<int, int>> positions;
    map<pair<int, int>, int> ranking;
    for(int i = 0; i < n; i++){
        int problems, time; cin >> problems >> time;
        if(!ranking[{problems, time}]){
            positions.push_back({problems, time});
        }
        ranking[{problems, time}]++;
    }
    sort(positions.begin(), positions.end(), compute);
    int standing = 0;
    for(auto item : positions){
        standing += ranking[{item.F, item.S}];
        if(standing >= k){
            cout << ranking[{item.F, item.S}] << endl;
            return 0;
        }
    }
}