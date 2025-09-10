#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long
#define oo 1000000000

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        ll time, time_book1 = oo, time_book2 = oo, time_two_books = oo;
        string books;

        while(n--){

            cin >> time >> books;

            if(books == "11" && time < time_two_books){
                time_two_books = time;
            }
            if(books[0] == '1' && time < time_book1){
                time_book1 = time;
            }
            if(books[1] == '1' && time < time_book2){
                time_book2 = time;
            }
        }
        if(time_book1 == oo || time_book2 == oo) cout << -1 << endl;
        else cout << min(time_two_books, time_book1 + time_book2) << endl;
    }
}