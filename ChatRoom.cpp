#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    string word = "hello";
    auto start = s.begin();
    for(int i = 0, size = word.length(); i < size; i++){
        auto test = find(start, s.end(), word[i]);
        if(test == s.end()){
            cout << "NO";
            return 0;
        }
        start = test + 1;
    }
    cout << "YES";
    return 0;
}