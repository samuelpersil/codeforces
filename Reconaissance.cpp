#include <bits/stdc++.h>
#define F first
#define S second

using namespace std;

int main(){
    int n; cin >> n;
    int heights[n], mindiff;
    pair<int, int> bestpair;
    for(int i = 0; i < n; i++){
        cin >> heights[i];
    }

    mindiff = abs(heights[0] - heights[1]);
    bestpair.F = 1; bestpair.S = 2;

    for(int i = 0; i < n; i++){
        if(i == n - 1){
            if(abs(heights[i] - heights[0]) < mindiff){
                bestpair.F = i + 1; bestpair.S = 1;
            }
        }
        else{
            if(abs(heights[i] - heights[i + 1]) < mindiff){
                mindiff = abs(heights[i] - heights[i + 1]);
                bestpair.F = i + 1; bestpair.S = i + 2;
            }
        }
    }
    cout << bestpair.F << " " << bestpair.S;

    return 0;
}