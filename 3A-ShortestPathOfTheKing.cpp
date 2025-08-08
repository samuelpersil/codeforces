#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long

using namespace std;

int main(){ fastio
    char x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

    int dX = x2 - x1, dY = y2 - y1, moves = max(abs(dX), abs(dY));

    cout << moves << endl;

    while(moves--){
        if(dX > 0){
            dX--;
            cout << 'R';
        }
        else if(dX < 0){
            dX++;
            cout << 'L';
        }
        if(dY > 0){
            dY--;
            cout << 'U';
        } 
        else if(dY < 0){
            dY++;
            cout << 'D';
        }

        cout << endl;
    }
}