/*
Codeforces Round 285 (Div. 2)
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d, misha, vasya; cin >> a >> b >> c >> d;
    misha = max(3*a/10, a - a * c / 250);
    vasya = max(3*b/10, b - b * d / 250);
    if(misha > vasya){
        cout << "Misha";
    }
    else if(misha < vasya){
        cout << "Vasya";
    }
    else{
        cout << "Tie";
    }
}