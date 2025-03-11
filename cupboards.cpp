#include <bits/stdc++.h>
#define F first
#define S second

using namespace std;

int main(){
    int n, answer;
    pair<int, int> opened_doors, now_doors;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> now_doors.F;
        cin >> now_doors.S;
        opened_doors.F += now_doors.F;
        opened_doors.S += now_doors.S;
    }
    answer = min(opened_doors.F, n - opened_doors.F) + min(opened_doors.S, n - opened_doors.S);
    cout << answer << endl;
    return 0;
}