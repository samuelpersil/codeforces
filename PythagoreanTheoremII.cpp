#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int answer = 0;
    for(int c = 1; c <= n; c++){
        for(int a = 1; a < c; a++){
            int b2 = c * c - a * a;
            int b = sqrt(b2);
            if( b * b == b2 && a + b > c && b + c > a && a + c > b){
                answer++;
            }
        }
    }
    cout << answer/2;
}