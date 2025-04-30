#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, a, b, c, d;
    string answer;

    cin >> t;

    while(t--){
        answer = "NO";
        cin >> a >> b >> c >> d;
        int sorteed[] = {a, b, c, d}, original[] = {a, b, c, d};
        sort(sorteed, sorteed + 4);
    
        for(int i = 0; i < 2; i++){
            if((original[2*i] == sorteed[0] && original[2*i+1] == sorteed[2]) || (original[2*i+1] == sorteed[0] && original[2*i] == sorteed[2])){
                answer = "YES";
                break;
            }
        }
        cout << answer << endl;
    }

    return 0;
}