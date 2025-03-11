#include <bits/stdc++.h>

using namespace std;

int main(){
    string word; cin >> word;
    for(int i = 0, size = word.length(); i < size; i++){
        if(i == 0) cout << (char) toupper(word[i]);
        else cout << word[i];
    }
}