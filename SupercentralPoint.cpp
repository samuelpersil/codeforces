#include <bits/stdc++.h>
#define F first
#define S second

using namespace std;

int main(){
    int n; cin >> n;
    int supers = 0;
    pair<int, int> point[n];
    for(int i = 0; i < n; i++){
        cin >> point[i].F >> point[i].S;
    }
    for(int i = 0; i < n; i++){
        bool hasLeft = false;
        bool hasRight = false;
        bool hasUp = false;
        bool hasDown = false;

        for(int j = 0; j < n; j++){
            if(i == j) continue;
            if(point[i].F == point[j].F && point[i].S < point[j].S){
                hasUp = true;
                continue;
            }
            else if(point[i].F == point[j].F && point[i].S > point[j].S){
                hasDown = true;
                continue;
            }
            else if(point[i].S == point[j].S && point[i].F > point[j].F){
                hasLeft = true;
                continue;
            }
            else if(point[i].S == point[j].S && point[i].F < point[j].F){
                hasRight = true;
                continue;
            }
        }
        if(hasLeft && hasRight && hasUp && hasDown){
            supers++;
        }
    }
    cout << supers << endl;
    return 0;
}