#include <bits/stdc++.h>

using namespace std;

int sumdigits(int n){
    int summing = 0;
    while(n != 0){
        summing += (n%10);
        n /= 10;
    }
    return summing;
}

int main(){
    string number; cin >> number;
    int answer = 0;

    if(number.length() == 1){
        cout << 0;
        return 0;
    }

    int sum = 0;
    answer++;
    for(char c : number){
        sum += c - '0';
    }
    
    while(sum >= 10){
        sum = sumdigits(sum);
        answer++;
    }
    cout << answer;
}
