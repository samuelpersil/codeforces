#include <bits/stdc++.h>

using namespace std;

int main(){
    string guest, host, letters;
    cin >> guest >> host >> letters;
    int totalletters = 0;
    map<char, int> count;
    for(int i = 0, size = guest.length(); i < size; i++){
        count[guest[i]]++;
        totalletters++;
    }
    for(int i = 0, size = host.length(); i < size; i++){
        count[host[i]]++;
        totalletters++;
    }
    for(int i = 0, size = letters.length(); i < size; i++){
        if(count.find(letters[i]) == count.end() || count[letters[i]] <= 0){
            cout << "NO";
            return 0;
        }
        count[letters[i]]--;
    }
    if(totalletters != letters.length()){
        cout << "NO";
        return 0;
    }

    cout << "YES";
    return 0;
}