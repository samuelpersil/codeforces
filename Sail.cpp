#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, sx, sy, ex, ey, time = 0;
    cin >> t >> sx >> sy >> ex >> ey;
    char direction;
    for(int i = 0; i < t; i++){
        cin >> direction;
        if(sx != ex || sy != ey){
            if(direction == 'E' && sx < ex){
                sx++;
            }
            else if(direction == 'W' && sx > ex){
                sx--;
            }
            else if(direction == 'N' && sy < ey){
                sy++;
            }
            else if(direction == 'S' && sy > ey){
                sy--;
            }
            time++;
        }
    }
    
    cout << ((sx != ex || sy != ey) ? -1 : time) << endl;


    return 0;
}