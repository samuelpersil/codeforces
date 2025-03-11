#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, now, max, min, amazing = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> now;
        if(i == 0){
            max = now;
            min = now;
        }
        else{
            if(now > max){
                max = now;
                amazing++;
            }
            if(now < min){
                min = now;
                amazing++;
            }
        }
    }
    
    cout << amazing;

    return 0;
}