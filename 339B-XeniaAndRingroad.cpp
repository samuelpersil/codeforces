#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, m, last = 1, now, answer = 0, distance; cin >> n >> m;

    while(m--){
        cin >> now;

        distance = now - last;
        if(distance < 0){
            distance += n;
        }
        answer += distance;
        
        last = now;
    }

    cout << answer;
}