#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    bool wordnow = false;
    string song;
    for(int i = 0, size = s.length(); i < size; i++){
        if(s.substr(i, 3) == "WUB"){
            if(wordnow == true){
                wordnow = false;
                song += " ";
            }
            i += 2;
            continue;
        }
        song += s[i];
        wordnow = true;
    }
    cout << song;
}