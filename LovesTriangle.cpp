#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int plane;
    map<int, int> likes;
    for(int i = 0; i < n; i++){
        cin >> plane;
        likes[i] = plane - 1;
    }
    for(int i = 0; i < n; i++){
        int plane1 = i;
        if(!likes.count(plane1)){
            continue;
        }
        int plane2 = likes[plane1];
        if(!likes.count(plane2)){
            continue;
        }
        int plane3 = likes[plane2];
        if(!likes.count(plane3) || likes[plane3] != plane1){
            continue;
        }
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}