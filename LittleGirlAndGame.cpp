#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    map<int, int> counts;
    int odds = 0;
    for(int i = 0, size = s.length(); i < size; i++){
        counts[s[i]]++;
    }
    for(auto charac : counts){
        if(charac.second % 2 == 1){
            odds++;
        }
    }
    cout << (odds % 2 == 1 || odds <= 1 ? "First" : "Second");


    return 0;
}