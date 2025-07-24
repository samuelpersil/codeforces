#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define F first
#define S second
#define endl '\n'
#define ll long long
#define all(a) a.begin(), a.end()

using namespace std;

bool comp(char a, char b){
    return a > b;
}

int main(){ fastio
    int n; cin >> n;
    while(n--){
        string s; cin >> s;
        for(int i = 0, size = s.length(); i < size; i++){
            if((s[i] == 'F' && i <= size - 3 && s[i+1] == 'F' && s[i+2] == 'T') || (s[i] == 'N' && i <= size - 3 && s[i+1] == 'T' && s[i+2] == 'T')){
                sort(all(s), comp);
                break;
            }
        }
        cout << s << endl;
    }

}