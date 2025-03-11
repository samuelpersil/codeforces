#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    string points; cin >> points;

    int position = 0;
    int jumps = 1;
    while(true){
        for(int i = min(m, n - position - 1); i > 0; i--){
            if(position + i == n - 1){
                cout << jumps;
                return 0;
            }
            else if(points[position + i] == '1'){
                position += i;
                jumps++;
                break;
            }
            else if(i == 1){
                cout << -1;
                return 0;
            }
        }
    }
}