#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int value, negativesInSet1 = 0, positives = 0, numbersInSet2 = 0;
    vector<int> array;
    set<int> set1;
    set<int> set2;
    set<int> set3;

    while(n--){
        cin >> value;
        array.push_back(value);
        if(value > 0) positives++;
    }

    for(int i : array){
        if(i < 0 && negativesInSet1 == 0){
            set1.insert(i);
            negativesInSet1++;
        }
        else if(i > 0 || (i < 0 && positives == 0 && numbersInSet2 < 2)){
            set2.insert(i);
            numbersInSet2++;
        }
        else set3.insert(i);
    }
    
    cout << set1.size();
    for(auto item : set1){
        cout << " " << item;
    }
    cout << endl;

    cout << set2.size();
    for(auto item : set2){
        cout << " " << item;
    }
    cout << endl;

    cout << set3.size();
    for(auto item : set3){
        cout << " " << item;
    }
    cout << endl;

}