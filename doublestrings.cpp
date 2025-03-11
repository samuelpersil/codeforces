#include <bits/stdc++.h>
#include <map>
#include <vector>

using std::vector, std::map;

int main(){
    int t;
    std::cin >> t;

    while(t--){
        int n;
        std::cin >> n;
        vector<std::string> strings(n);
        map<std::string, bool> strmap;
        for(int i = 0; i < n; i++){
            std::cin >> strings[i];
            strmap[strings[i]] = true;
        }
        for(int i = 0; i < n; i++){
            int istrue = 0;
            for(int j = 0, size = strings[i].length(); j < size; j++){
                std::string sub1 = strings[i].substr(0, j);
                std::string sub2 = strings[i].substr(j);
                if(strmap[sub1] && strmap[sub2]){
                    istrue = 1;
                    break;
                }
            }
            std::cout << istrue;
        }
        std::cout << std::endl;
    }


    return 0;
}