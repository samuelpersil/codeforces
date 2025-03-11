#include <iostream>
#include <map>

int main(){
    int n, m;
    long long score1 = 0;
    long long score2 = 0;
    std::map<int,int> mp;

    std::cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        std::cin >> x;
        mp[x] = i;
    }

    std::cin >> m;
    for(int i = 0; i < m; i++){
        int querie;
        std::cin >> querie;
        score1 += mp[querie] + 1;
        score2 += n - mp[querie];
    }
    std::cout << score1 << " " << score2;

    return 0;
}