#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int count25 = 0, count50 = 0, person;
    while(n--){
        cin >> person;
        if(person == 25){
            count25++;
        }
        else if(person == 50){
            if(count25){
                count25--;
                count50++;
            }
            else{
                cout << "NO";
                return 0;
            }
        }
        else if(person == 100){
            if(count25 && count50){
                count25--;
                count50--;
            }
            else if(count25 >= 3){
                count25 -= 3;
            }
            else{
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}