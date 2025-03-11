#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    string answer = "";
    map<char, int> charcount;
    for(int i = 0, size = s.length(); i < size; i++){
        charcount[s[i]]++;
    }

    for(auto itr : charcount){
        if(itr.second % n == 0){
            for(int j = 0; j < itr.second / n; j++){
                answer += itr.first;
            }
        }
        else{
            cout << "-1";
            return 0;
        }
    }
    for(int i = 0; i < n; i++){
        cout << answer;
    }
    return 0;
}