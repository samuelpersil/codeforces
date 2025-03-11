#include <bits/stdc++.h>

using namespace std;

int main(){
    map<int, int> colors;
    int color, differents = 0;
    for(int i = 0; i < 4; i++){
        cin >> color;
        colors[color]++;
        if(colors[color] == 1) differents++;
    }
    cout << 4 - differents;

    return 0;
}